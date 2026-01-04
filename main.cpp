void setup() {
  Serial.begin(115200);
  delay(1000); 

  // Start OI
  Serial.write(128); // START
  delay(100);
  Serial.write(132); //FULL
  delay(100);

  Serial.write(164);
  Serial.write(116);  // T
  Serial.write(82);  // R
  Serial.write(79);  // O
  Serial.write(78);  // N

  Serial.write(140); // Store Song
  Serial.write(2);   // Song number
  Serial.write(22);  // Total number of notes in the song

  Serial.write(68); Serial.write(32);
  Serial.write(75); Serial.write(192);


  Serial.write(68); Serial.write(32);
  Serial.write(75); Serial.write(32);
  Serial.write(73); Serial.write(192);

  Serial.write(68); Serial.write(32);
  Serial.write(73); Serial.write(32);
  Serial.write(71); Serial.write(192);


  Serial.write(68); Serial.write(32);
  Serial.write(71); Serial.write(32);
  Serial.write(70); Serial.write(192);
    
  Serial.write(66); Serial.write(32);
  Serial.write(70); Serial.write(32);
  Serial.write(68); Serial.write(192);

  Serial.write(70); Serial.write(32);
  Serial.write(71); Serial.write(192);

  Serial.write(68); Serial.write(32);
  Serial.write(71); Serial.write(32);
  Serial.write(73); Serial.write(192);

  Serial.write(73); Serial.write(32);
  Serial.write(75); Serial.write(32);
  Serial.write(68); Serial.write(192);

  delay(500);

  Serial.write(141); // PLAY command
  Serial.write(0);   // Song number

  

  Serial.write(173); // STOP
}

void loop() {

}
