/*
 *    - Mini Hotbox -
 *  A revamp of the large hotbox on a smaller scale.
 *  The HotBox was part of the MCNS 2014 Musical production
 *  'Guys and Dolls' and was built by Tom Keating, Tom Ingram
 *  and Cian Byrne.
 *  
 *  This new software is for use with a custom PCB board
 *  made by Cian Byrne for control of 15 LED segments.
 *  
 *  Author: Cian Byrne 2016-2018
 */

 #define STANDARD_DELAY 150

int bottom[7] = {2,3,4,5,6,7,8};
int middle[5] = {A3,A2,A1,A0,15};
int top[3] = {14,16,10};

void setup() {
  // put your setup code here, to run once:
  // set all to output
  for(int i=0; i < 7; i++){
    pinMode(bottom[i], OUTPUT);
    if(i<5) pinMode(middle[i], OUTPUT);
    if(i<3) pinMode(top[i], OUTPUT);
  }

  // set all to initial state (low)
  for(int i=0; i < 7; i++){
    digitalWrite(bottom[i], LOW);
    if(i<5) digitalWrite(middle[i], LOW);
    if(i<3) digitalWrite(top[i], LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  //test();
  spinLR();
  spinLR();
  sweepLR();
  sweepRL();

  //reset();
}



void reset(){
  // set all to initial state (low)
  for(int i=0; i < 7; i++){
    digitalWrite(bottom[i], LOW);
    if(i<5) digitalWrite(middle[i], LOW);
    if(i<3) digitalWrite(top[i], LOW);
  }
}



void test(){
  delay(STANDARD_DELAY);
  for(int i=0; i < 7; i++){
    digitalWrite(bottom[i], HIGH);
    delay(STANDARD_DELAY);
  }

  for(int i=0; i < 5; i++){
    digitalWrite(middle[i], HIGH);
    delay(STANDARD_DELAY);
  }

  for(int i=0; i < 3; i++){
    digitalWrite(top[i], HIGH);
    delay(STANDARD_DELAY);
  }

  for(int i=0; i < 7; i++){
    digitalWrite(bottom[i], LOW);
    delay(STANDARD_DELAY);
  }

  for(int i=0; i < 5; i++){
    digitalWrite(middle[i], LOW);
    delay(STANDARD_DELAY);
  }

  for(int i=0; i < 3; i++){
    digitalWrite(top[i], LOW);
    delay(STANDARD_DELAY);
  }

  
}

void sweepLR(){
  delay(STANDARD_DELAY);
  digitalWrite(bottom[0], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[0], LOW);
  digitalWrite(bottom[1], HIGH);
  digitalWrite(middle[0], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[1], LOW);
  digitalWrite(middle[0], LOW);
  digitalWrite(bottom[2], HIGH);
  digitalWrite(middle[1], HIGH);
  digitalWrite(top[0], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[2], LOW);
  digitalWrite(middle[1], LOW);
  digitalWrite(top[0], LOW);
  digitalWrite(bottom[3], HIGH);
  digitalWrite(middle[2], HIGH);
  digitalWrite(top[1], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[3], LOW);
  digitalWrite(middle[2], LOW);
  digitalWrite(top[1], LOW);
  digitalWrite(bottom[4], HIGH);
  digitalWrite(middle[3], HIGH);
  digitalWrite(top[2], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[4], LOW);
  digitalWrite(middle[3], LOW);
  digitalWrite(top[2], LOW);
  digitalWrite(bottom[5], HIGH);
  digitalWrite(middle[4], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[5], LOW);
  digitalWrite(middle[4], LOW);
  digitalWrite(bottom[6], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[6], LOW);
  delay(STANDARD_DELAY);
}

void sweepRL(){
  delay(STANDARD_DELAY);
  digitalWrite(bottom[6], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[6], LOW);
  digitalWrite(bottom[5], HIGH);
  digitalWrite(middle[4], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[5], LOW);
  digitalWrite(middle[4], LOW);
  digitalWrite(bottom[4], HIGH);
  digitalWrite(middle[3], HIGH);
  digitalWrite(top[2], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[4], LOW);
  digitalWrite(middle[3], LOW);
  digitalWrite(top[2], LOW);
  digitalWrite(bottom[3], HIGH);
  digitalWrite(middle[2], HIGH);
  digitalWrite(top[1], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[3], LOW);
  digitalWrite(middle[2], LOW);
  digitalWrite(top[1], LOW);
  digitalWrite(bottom[2], HIGH);
  digitalWrite(middle[1], HIGH);
  digitalWrite(top[0], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[2], LOW);
  digitalWrite(middle[1], LOW);
  digitalWrite(top[0], LOW);
  digitalWrite(bottom[1], HIGH);
  digitalWrite(middle[0], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[1], LOW);
  digitalWrite(middle[0], LOW);
  digitalWrite(bottom[0], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[0], LOW);
  delay(STANDARD_DELAY);
}

void spinLR(){
  // start with extreme R and middle
  //delay(STANDARD_DELAY);
  digitalWrite(bottom[0], HIGH);
  digitalWrite(bottom[3], HIGH);
  digitalWrite(middle[2], HIGH);
  digitalWrite(top[1], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[0], LOW);
  digitalWrite(bottom[3], LOW);
  digitalWrite(middle[2], LOW);
  digitalWrite(top[1], LOW);
  digitalWrite(bottom[1], HIGH);
  digitalWrite(bottom[4], HIGH);
  digitalWrite(middle[3], HIGH);
  digitalWrite(middle[0], HIGH);
  digitalWrite(top[2], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[1], LOW);
  digitalWrite(bottom[4], LOW);
  digitalWrite(middle[3], LOW);
  digitalWrite(middle[0], LOW);
  digitalWrite(top[2], LOW);
  digitalWrite(bottom[2], HIGH);
  digitalWrite(bottom[5], HIGH);
  digitalWrite(middle[4], HIGH);
  digitalWrite(middle[1], HIGH);
  digitalWrite(top[0], HIGH);
  
  delay(STANDARD_DELAY);
  digitalWrite(bottom[2], LOW);
  digitalWrite(bottom[5], LOW);
  digitalWrite(middle[4], LOW);
  digitalWrite(middle[1], LOW);
  digitalWrite(top[0], LOW);
  digitalWrite(bottom[3], HIGH);
  digitalWrite(bottom[6], HIGH);
  digitalWrite(middle[2], HIGH);
  digitalWrite(top[1], HIGH);

  
  delay(STANDARD_DELAY);
  digitalWrite(bottom[3], LOW);
  digitalWrite(bottom[6], LOW);
  digitalWrite(middle[2], LOW);
  digitalWrite(top[1], LOW);
  digitalWrite(bottom[4], HIGH);
  digitalWrite(bottom[0], HIGH);
  digitalWrite(middle[3], HIGH);
  digitalWrite(top[2], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[4], LOW);
  digitalWrite(bottom[0], LOW);
  digitalWrite(middle[3], LOW);
  digitalWrite(top[2], LOW);
  digitalWrite(bottom[5], HIGH);
  digitalWrite(bottom[1], HIGH);
  digitalWrite(middle[4], HIGH);
  digitalWrite(middle[0], HIGH);
  //digitalWrite(top[0], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[5], LOW);
  digitalWrite(bottom[1], LOW);
  digitalWrite(middle[4], LOW);
  digitalWrite(middle[0], LOW);
  //digitalWrite(top[0], HIGH);
  digitalWrite(bottom[6], HIGH);
  digitalWrite(bottom[2], HIGH);
  //digitalWrite(middle[0], HIGH);
  digitalWrite(middle[1], HIGH);
  digitalWrite(top[0], HIGH);

  delay(STANDARD_DELAY);
  digitalWrite(bottom[6], LOW);
  digitalWrite(bottom[2], LOW);
  //digitalWrite(middle[0], LOW);
  digitalWrite(middle[1], LOW);
  digitalWrite(top[0], LOW);
  
}

