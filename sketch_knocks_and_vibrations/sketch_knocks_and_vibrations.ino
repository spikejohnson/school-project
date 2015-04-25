int knock = 0;



void setup()
{
 // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop()
{
  int peizo = 0;
  // put your main code here, to run repeatedly:
  peizo = analogRead (0);
  if (peizo < 100)
   {
   }
  else
 { 
   // a knock has been detected
   knock = knock + 1;
   Serial.print("peizo ");
  Serial.println(peizo);
   Serial.print("knock ");
  Serial.println(knock);
  delay(138);
 }
}

