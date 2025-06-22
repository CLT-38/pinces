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

### Partie logicielle

- Crée un répertoire `pinces` sur le PC
- Crée un fichier `pinces.ino` à l'intérieur du répertoire `pinces`. Attention le nom du fichier doit être le même que le nom du répertoire, par convention d'Arduino.
- Double-clique sur `pinces.ino`
- Colle le contenu du fichier [INO](https://github.com/CLT-38/pinces/blob/main/pinces.ino) dans `pinces.ino`
- Clique sur `Select Board` pour choisir Arduino Uno R4
![image](https://github.com/user-attachments/assets/c4b4a4d4-7515-4942-b770-386035f94e2c)
- Clique sur ![image](https://github.com/user-attachments/assets/08234c2f-8302-4a5e-8e35-2fa07995c31a) pour compiler
- Clique sur ![image](https://github.com/user-attachments/assets/9386f98e-c20c-41bd-9cd6-9018717c5b22) pour envoyer ton programme sur l'Arduino

Tu dois voir un logo s'afficher dans la matrice de LED.
Comment peux-tu régler l'angle d'ouverture de la LED en modifiant le programme ? Change la ligne de code qui va bien et renvoie le programme sur l'Arduino pour vérifier son bon fonctionnement.

## Illustrations

La pince :
![Sans titre-1](https://github.com/user-attachments/assets/d36ce90b-b3c3-48bd-9151-13a567cdb77f)

L'Arduino Uno R4 :
![Sans titre-2](https://github.com/user-attachments/assets/4a6f4795-5155-4055-8e44-5652c6402650)
