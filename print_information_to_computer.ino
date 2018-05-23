void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  

}
byte val=65;
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<26;i++){
    Serial.write(val+i);
    Serial.print('=');
    Serial.println(val+i);
    delay(1000);
  }
}
