  // DFT_#A203 MECHANICAL TV TESTS SYNCHRO DISQUE INFRA ROUGE
  // Ma chaîne YouTube : https://www.youtube.com/c/ClaudeDufourmont
  // Mon GitHub : https://github.com/claudiusmarius
  // Cette Vidéo YouTube : https://youtu.be/Fwb1Ct1UFRE
  // le GitHub de ce projet : https://github.com/claudiusmarius/MECHANICAL-TV--TESTS-DE-LA-SYNCHRO-DISQUE-INFRA-ROUGE-DFTA203
  // Code pour SEEEDUINO XIAO
  #define FREQUENCY 400 // Fréquence en Hz
  #define PIN_OUTPUT 6 // Pin de sortie pour le signal carré (adaptable à votre montage)

  // Calcul de la période (en microsecondes)
  const unsigned long PERIOD_US = 1000000 / FREQUENCY;

  void setup() 
  {
  // Configuration de la broche comme sortie
  pinMode(PIN_OUTPUT, OUTPUT);
  }

  void loop() 
  {
  // Génération du signal carré avec rapport cyclique 20%
  digitalWrite(PIN_OUTPUT, HIGH);
  delayMicroseconds(PERIOD_US / 5); // Durée de l'état haut (1/5 de la période)
  digitalWrite(PIN_OUTPUT, LOW);
  delayMicroseconds((PERIOD_US * 4) / 5); // Durée de l'état bas (4/5 de la période)
  }
