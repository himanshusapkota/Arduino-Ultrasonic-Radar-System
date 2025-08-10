# Arduino Ultrasonic Radar System

This repository contains **only the Arduino code** for an ultrasonic radar system that uses a servo motor to rotate an HC-SR04 ultrasonic sensor, detecting objects and sending their distance readings via the serial monitor.  

## Components Required
- Arduino Uno or compatible board
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper Wires
- Breadboard (optional)
- USB Cable

## How It Works
1. The servo motor sweeps the ultrasonic sensor from 0° to 180° and back.
2. At each angle, the ultrasonic sensor measures the distance to the nearest object.
3. Data is sent to the Serial Monitor in the format:  

4. This code can be paired with a Processing or Python program for a radar-style visual interface (not included here).

## Wiring Diagram
| Component       | Arduino Pin |
|-----------------|-------------|
| Servo Signal    | D3          |
| Ultrasonic TRIG | D9          |
| Ultrasonic ECHO | D10         |
| VCC             | 5V          |
| GND             | GND         |

## Getting Started
1. Connect components according to the wiring diagram.
2. Upload the code from `radar_system.ino` to your Arduino.
3. Open Serial Monitor (baud rate: `9600`) to view distance readings.

##HIMANSHU
