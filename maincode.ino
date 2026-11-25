int led = 3;
int photo = A1;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(photo, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(photo);
  Serial.println(light);

  if (light < 400) {
    digitalWrite(led, HIGH);

  }
  else {
    digitalWrite(led, LOW);
  }
  
  delay(200);

  

}
