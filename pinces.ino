#include <Servo.h>
#include <Arduino_LED_Matrix.h>

Servo myservo;  // create servo object to control a servo
ArduinoLEDMatrix matrix;

uint8_t logo_clt[8][12] = {
  {0,0,0, 0,0,1,1,0,0, 0,0,0},
  {0,0,0, 1,0,1,1,0,1, 0,0,0},
  {0,0,0, 1,1,0,0,1,1, 0,0,0},
  {0,0,0, 1,0,0,0,0,1, 0,0,0},
  {0,0,0, 1,0,0,0,0,1, 0,0,0},
  {0,0,0, 1,1,0,0,1,1, 0,0,0},
  {0,0,0, 1,0,1,1,0,1, 0,0,0},
  {0,0,0, 0,0,1,1,0,0, 0,0,0}
};

int angle;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(A0);  // attaches the servo on pin A0 to the servo object
  matrix.begin();
}

void loop() {
  angle = 40;   // 180 par exemple pince complètement ouverte ; 0 pince fermée
  myservo.write(angle);                  // sets the servo position according to the scaled value
  matrix.renderBitmap(logo_clt, 8, 12);     // Affiche l'image sur les leds

  delay(1000);                           // waits for the servo to get there

  myservo.detach(); // Arrête le signal vers le servo pour qu'il se "taise" (pour nos tests ; ne pas le faire en condition réelle de compétition)
  while (true);  // stop the program ; ne pas le faire en condition réelle de compétition
}
