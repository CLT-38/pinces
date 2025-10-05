# avec les pinces en bois de : https://www.thingiverse.com/thing:2415


#include <Servo.h>

Servo servoMotor;  // Créer un objet servo
int servoPin = A0; // Pin de contrôle du servo
int currentAngle = 90; // Position actuelle du servo (position centrale)


void setup() {
  Serial.begin(9600);
  servoMotor.attach(servoPin); // Attacher le servo au pin A0
  servoMotor.write(currentAngle); // Position initiale
  Serial.println("Servo initialisé à 90°");
  Serial.println("Commandes disponibles:");
  Serial.println("'z' ou 'Z' : mouvement +5°");
  Serial.println("'s' ou 'S' : mouvement -5°");
  delay(1000); // Attendre que le servo atteigne la position
}

void loop() {
  // Vérifier s'il y a des données disponibles sur le port série
  if (Serial.available() > 0) {
    char command = Serial.read(); // Lire le caractère envoyé
    
    if (command == 'z' || command == 'Z') {
      // Bouger le servo de +5°
      moveServo(10);
      Serial.println("Commande 'z' reçue - mouvement +5°");
    }
    else if (command == 's' || command == 'S') {
      // Bouger le servo de -5°
      moveServo(-10);
      Serial.println("Commande 's' reçue - mouvement -5°");
    }
    else {
      Serial.println("Commande non reconnue. Utilisez 'z' pour +5° ou 's' pour -5°");
    }
  }
}

void moveServo(int angleStep) {
  int newAngle = currentAngle + angleStep;
  
  // Limiter l'angle entre 0 et 180 degrés
  if (newAngle >= 0 && newAngle <= 180) {
    currentAngle = newAngle;
    servoMotor.write(currentAngle);
    
    Serial.print("Servo déplacé à: ");
    Serial.print(currentAngle);
    Serial.println("°");
  } else {
    Serial.println("Angle hors limites!");
  }
}
