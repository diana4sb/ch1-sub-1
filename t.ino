void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int thermPin = 1;
int V;
float R = 9870.0;
float logRt, Rt, T,Temp;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
V = analogRead(thermPin);
Rt = R*((1023.0/(float)V)-1.0);
logRt = log(Rt);
T = (1.0/(c1+(c2*logRt)+(c3*logRt*logRt*logRt)))-273.15;
Temp = ((T*9)/5)+32;
//Serial.print(" ");Serial.print(Rt);
//Serial.print(" ");
Serial.print(Temp);
delay(500);
}
