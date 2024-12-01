
#define bom D1
int thoigian =0;
void setup() {
  // put your setup code here, to run once:
pinMode(bom, OUTPUT);
digitalWrite(bom, LOW);
delay(100);
int val = analogRead(A0);
thoigian = map(val,0,1023,0,1000);
delay(500);  
  for(int i = 0; i <= thoigian; i++){
    digitalWrite(bom, HIGH);
    delay(10);
  }
  digitalWrite(bom, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(bom, LOW);
}
