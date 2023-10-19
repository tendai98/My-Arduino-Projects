#define ADC_MAX 1023.0
float a, b, c, d, e, f, g, h, i;

String output = "";

void setup() {
 Serial.begin(2000000); 
}

void loop() {
   a = float(analogRead(7)) / ADC_MAX;
   b = float(analogRead(10)) / ADC_MAX;
   c = float(analogRead(13)) / ADC_MAX;
   d = float(analogRead(12)) / ADC_MAX;
   e = float(analogRead(15)) / ADC_MAX;
   f = float(analogRead(9)) / ADC_MAX;
   g = float(analogRead(6)) / ADC_MAX;
   h = float(analogRead(2)) / ADC_MAX;
   i = float(analogRead(4)) / ADC_MAX;

   output += "<"+String(a)+":";
   output += String(b)+":";
   output += String(c)+":";
   output += String(d)+":";
   output += String(e)+":";
   output += String(f)+":";
   output += String(g)+":";
   output += String(h)+":";
   output += String(i)+">\r\n";

   Serial.print(output);
   output = "";
   delay(50);
}
