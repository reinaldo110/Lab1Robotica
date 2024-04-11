/** Includes *****************************/
#include <Servo.h>

/** Definitions **************************/
double Distancia;
int LDR_Pin = A0;
int trigPin = 10;
int echoPin = 9;
// Create an instance for servo motor
Servo servo_12;


/** Functions ****************************/
// Ultrasound distance function calculator
double fnc_ultrasonic_distance(int _t, int _e, String _u) {
  unsigned long dur=0;
  digitalWrite(_t, LOW);
  delayMicroseconds(5);
  digitalWrite(_t, HIGH);
  delayMicroseconds(10);
  digitalWrite(_t, LOW);
  dur = pulseIn(_e, HIGH, 18000);
  if (dur == 0)
    return 999.0;
  if (_u == "cm")
    return (dur/58);
  else if (_u == "in")
    return (dur/148);
}

/** Setup function ***********************/
void setup() {
  pinMode(LDR_Pin,INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  servo_12.attach(12);
  Serial.println("setup");
// Attach the pin selected from blockly
servo_12.write(0);
}

/** Loop function ************************/
void loop() {
  int valorLDR = analogRead(LDR_Pin);
  Distancia = fnc_ultrasonic_distance(trigPin, echoPin, "cm");
  servo_12.write(0);
  Serial.print("luz:");
  Serial.println(valorLDR);
  Serial.print("distancia:");
  Serial.println(Distancia);
  if (Distancia >= 80 && valorLDR >= 700) {
    // Servomotor write angle and delay code
    servo_12.write(180);
    Serial.print("180");
    delay(1000);
  }
  else {
    if (Distancia <= 30 && valorLDR < 600) {
      // Servomotor write angle and delay code
      servo_12.write(60);
      Serial.print("60");
      delay(1000);
    }
    else if (Distancia == 2 && valorLDR  <= 300) {
      // Servomotor write angle and delay code
      servo_12.write(Distancia);
      delay(1000);
    }
    else{
      servo_12.write(0);
      delay(1000);
    }
  }
}