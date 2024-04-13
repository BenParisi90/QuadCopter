#include <Arduino.h>

// put function declarations here:
//int myFunction(int, int);

#define POT_PIN 2

void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
  Serial.begin(9600);

  pinMode(POT_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Hello World");

  int potValue = analogRead(POT_PIN);
  Serial.println(potValue);
}

// put function definitions here:
/*
int myFunction(int x, int y) {
  return x + y;
}
*/