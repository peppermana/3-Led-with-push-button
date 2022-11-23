#define led_yellow 8
#define led_red 9
#define led_blue 10
#define button 7

int status = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(led_yellow, OUTPUT);
pinMode(led_red, OUTPUT);
pinMode(led_blue, OUTPUT);
pinMode(button, INPUT);
digitalWrite(led_yellow, LOW);
digitalWrite(led_red, LOW);
digitalWrite(led_blue, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(button) == HIGH){ //jika button diberi inputin high atau 1 maka lakukan
  status++;// increment 
  delay(100); //delay waktu 1 milisecon 
}
if (status == 1){
  digitalWrite(led_yellow, HIGH);
}
else if (status == 2){
  digitalWrite(led_red, HIGH);
}
else if (status == 3){
  digitalWrite(led_blue, HIGH);
}
else if (status == 4){
  status = 0;
}
else{
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW );
  digitalWrite(led_blue, LOW );
}
}


 