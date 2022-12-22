#define analogPin A0 /* ESP8266 Analog Pin ADC0 = A0 */

int adcValue = 0.0;  /* Variable to store Output of ADC */
int current = 0.0;

void setup()
{
  Serial.begin(115200); /* Initialize serial communication at 115200 */
}

void loop()
{
  adcValue = analogRead(analogPin); /* Read the Analog Input value */
  current = (adcValue / 1023.0);

  /* Print the output in the Serial Monitor */
  Serial.print("ADC Value = ");
  Serial.println(adcValue);
  Serial.println(current);

  delay(1000);
}
