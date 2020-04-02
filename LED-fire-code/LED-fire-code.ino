/*
 By: Cian Byrne 2015
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  
}

// the loop function runs over and over again forever
void loop() {
  int randomRed = random(100, 255);
  int randNum = random(0,5);
  analogWrite(9, 0);
  if(randNum == 5){
    analogWrite(10, 0);
    analogWrite(11, randomRed);
  }else if(randNum == 4){
    analogWrite(10, 10);
    analogWrite(11, 255);
  }else if(randNum == 3){
    analogWrite(10, 25);
    analogWrite(11, 255);
  }else if(randNum == 2){
    analogWrite(10, 50);
    analogWrite(11, 255);
  }else if(randNum == 1){
    analogWrite(10, 0);
    analogWrite(11, randomRed);
  }
  
  delay(random(50,100));
}
