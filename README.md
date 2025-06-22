# pinces

Le programme `pinces.ino` te permet de piloter les pinces démo Arduino.
Il affiche aussi le logo CLT sur la matrice de LED de l'Arduino

Matériel requis :
- les pinces
- l'Arduino
- les câbles pour relier les pins de l'Arduino aux pinces
- un pc
- un câble usb pour relier le pc à l'Arduino ( pour envoyer les programmes dessus)

Logiciel requis :
- Arduino IDE
- le code [INO](https://github.com/CLT-38/pinces/blob/main/pinces.ino)

## Tuto

### Montage électronique

Câble les 3 fils du moteur de la pince comme suit :

- Relie le GND du moteur de la pince au GND de l'Arduino
- Relie le + du moteur de la pince au 5V de l'Arduino (le moteur ne fonctionnera pas sur le 3,3V)
- Relie la commande du moteur de la pince à une des entrées analogique de l'Arduino (Analog In), par exemple A0

Câble l'Arduino avec le PC comme suit :

- Prends un câble USB C côté Arduino et USB C ou USB A côté PC (en fonction des connecteurs que tu as à disposition sur le PC)

### 

## Illustrations

La pince :
![Sans titre-1](https://github.com/user-attachments/assets/d36ce90b-b3c3-48bd-9151-13a567cdb77f)

L'Arduino Uno R4 :
![Sans titre-2](https://github.com/user-attachments/assets/4a6f4795-5155-4055-8e44-5652c6402650)
