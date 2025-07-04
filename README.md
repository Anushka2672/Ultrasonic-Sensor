# Ultrasonic Sensor – Water Tank Height Measurement

This Arduino project uses an ultrasonic sensor to measure the water level (height) inside a tank.

## 📌 Description

The sensor is placed at the top of the water tank. It sends out an ultrasonic pulse and measures the time taken for the echo to return from the water surface. The code then calculates the distance from the sensor to the water surface, and subtracts it from the known total height of the tank to determine how full the tank is.

- Distance measured = from sensor to water surface  
- Water height = Total tank height - Distance measured

## 🛠 Hardware Required

- Arduino board (NodeMCU ESP8266)
- Ultrasonic Sensor
- Jumper wires
- (Optional) LCD display or buzzer for output

## 🔌 Circuit Connections

| Ultrasonic Sensor | Arduino Pin |
|-------------------|-------------|
| VCC               | 3.3V          |
| GND               | GND         |
| Trig              | D6          |
| Echo              | D7          |

> You can change D6 and D7 in the code to any other digital pins.
