//ÖRNEK KOD OLUP ELEKTRONİK DOSYASI İÇİN BU KOD EKLENMİŞTİR.
const int ledPin = 13;

void setup() {
  // LED pini çıkış olarak ayarla
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // LED'i yak
  digitalWrite(ledPin, HIGH);
  delay(1000); // 1 saniye bekle

  // LED'i söndür
  digitalWrite(ledPin, LOW);
  delay(1000); // 1 saniye bekle
}
