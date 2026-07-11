/*
  Model Artificial Pancreas
  Arduino Feedback Control System

  A0  -> Conductivity sensor
  D11 -> MOSFET / Pump control
*/

const int sensorPin = A0;
const int pumpPin = 11;

// Change after calibration
int threshold = 300;

int sensorValue = 0;
float voltage = 0;

void setup()
{
  Serial.begin(9600);

  pinMode(sensorPin, INPUT);
  pinMode(pumpPin, OUTPUT);

  // Initially keep pump OFF
  digitalWrite(pumpPin, LOW);

  Serial.println("Artificial Pancreas Model Started");
  Serial.println("Time(ms),Sensor Value,Voltage,Pump Status");
}

void loop()
{
  // Read conductivity sensor
  sensorValue = analogRead(sensorPin);

  // Convert ADC value to voltage
  voltage = sensorValue * (5.0 / 1023.0);

  // Feedback control
  if (sensorValue > threshold)
  {
    // High simulated glucose level
    digitalWrite(pumpPin, HIGH);

    Serial.print(millis());
    Serial.print(",");
    Serial.print(sensorValue);
    Serial.print(",");
    Serial.print(voltage);
    Serial.println(",PUMP ON");
  }
  else
  {
    // Target level reached
    digitalWrite(pumpPin, LOW);

    Serial.print(millis());
    Serial.print(",");
    Serial.print(sensorValue);
    Serial.print(",");
    Serial.print(voltage);
    Serial.println(",PUMP OFF");
  }

  delay(100);
}