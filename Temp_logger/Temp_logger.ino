const int lm35_pin = A3;  // Pin connected to the LM35 sensor
int temp_adc_val;         // Raw ADC value
float temp_val;           // Temperature in °C

void setup() {
  Serial.begin(9600);  // Initialize serial communication at 9600 baud
}

void loop() {
  temp_adc_val = analogRead(lm35_pin);             // Read the ADC value from the LM35 pin
  float voltage = temp_adc_val * (5.0 / 1024.0);   // Convert ADC value to voltage
  temp_val = voltage * 100.0;                      // Convert voltage to temperature (10mV/°C)

  // Print temperature to Serial Monitor
  Serial.println(temp_val);


  delay(1000);  // Wait for 1 second
}
