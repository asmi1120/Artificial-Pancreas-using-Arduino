# Artificial-Pancreas-using-Arduino
Arduino-based model artificial pancreas demonstrating closed-loop feedback control, real-time sensor monitoring, and automated pump actuation using a MOSFET switching circuit.
# Arduino-Based Model Artificial Pancreas

## Project Overview

This project presents an Arduino-based model of an artificial pancreas using a closed-loop feedback control system. The system demonstrates the fundamental concept of automatic glucose regulation by continuously monitoring a simulated glucose parameter and controlling a pump based on a predefined threshold.

The project is an educational prototype designed to demonstrate sensing, real-time monitoring, feedback control, and automated actuation.

## Problem Statement

Maintaining blood glucose within a desired range requires continuous monitoring and timely insulin delivery. Manual intervention may not provide continuous and immediate control.

The objective of this project was to develop a simplified model that demonstrates how a closed-loop system can automatically monitor a parameter and initiate corrective action when the measured value exceeds a defined threshold.

## Proposed Solution

A conductivity-based sensing setup is used to simulate variations in blood glucose levels. The Arduino continuously reads the sensor output through its analog input and compares the measured value with a predefined threshold.

When the sensor value indicates a simulated high-glucose condition, the Arduino activates a pump through a MOSFET switching circuit. The pump introduces the corrective liquid into the system. Once the desired threshold is reached, the controller automatically switches the pump OFF.

This creates a closed-loop feedback mechanism similar to the basic control principle used in an artificial pancreas.

## Hardware Components

* Arduino UNO
* Peristaltic Water Pump
* N-Channel MOSFET
* 100 kΩ Resistor
* Conductivity-Based Sensor Setup
* Aluminium Foil Electrodes
* Breadboard
* Jumper Wires
* Distilled Water and Tap Water

## Technologies and Concepts

* Arduino
* Embedded C/C++
* Analog-to-Digital Conversion (ADC)
* Sensor Interfacing
* MOSFET Switching
* Pump Control
* Closed-Loop Feedback Control
* Real-Time Monitoring

## Implementation

The conductivity sensor is interfaced with the Arduino analog input. The Arduino continuously samples the sensor output using its 10-bit ADC.

The measured sensor value is compared with a calibrated threshold. If the value exceeds the threshold, the Arduino sends a control signal to the MOSFET, activating the pump.

The sensor is continuously monitored during pump operation. When the measured value reaches the desired threshold, the pump is automatically switched OFF.

This implementation enables autonomous monitoring and corrective actuation without continuous manual intervention.

## Outcome

* Developed a functional closed-loop feedback control prototype.
* Implemented real-time sensor data acquisition using Arduino.
* Automated pump activation based on sensor threshold conditions.
* Integrated a MOSFET-based switching circuit for actuator control.
* Demonstrated automatic corrective action using continuous feedback.
* Gained hands-on experience in sensor interfacing, embedded programming, and control-system implementation.

## Applications

The project demonstrates concepts applicable to:

* Biomedical control systems
* Automated drug-delivery research
* Closed-loop embedded systems
* Sensor-based automation
* Real-time monitoring and control

This project is an educational model developed to demonstrate the basic feedback-control principle of an artificial pancreas. It is not a medical device and must not be used for actual glucose monitoring or insulin delivery.
