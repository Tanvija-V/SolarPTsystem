# ☀️ Solar Panel Tracking System Using Embedded C

## 📌 Project Overview

The Solar Panel Tracking System is an embedded systems project designed to automatically adjust the orientation of a solar panel according to the direction of maximum light intensity.

The system uses four light sensor modules to detect light from different directions, an Arduino Uno to process the sensor readings, and two servo motors to control the horizontal and vertical movement of the panel.

This project is implemented using Arduino C/C++ and can be tested in the Wokwi online simulation environment without requiring physical hardware.

## 🎯 Objectives

* Develop an automatic solar tracking system using a microcontroller.
* Detect light intensity from four different directions.
* Control two servo motors based on sensor readings.
* Implement the tracking algorithm using Arduino C/C++.
* Simulate and test the circuit using Wokwi.
* Understand sensor interfacing, embedded programming, and motor control.

## ⚙️ Components Used

| Component            |    Quantity | Purpose                   |
| -------------------- | ----------: | ------------------------- |
| Arduino Uno          |           1 | Main controller           |
| Light sensor modules |           4 | Detect light intensity    |
| Servo motors         |           2 | Control panel orientation |
| Breadboard           |           1 | Circuit connections       |
| Jumper wires         | As required | Electrical connections    |
| Wokwi simulator      |           1 | Virtual circuit testing   |

**Note:** The project uses light sensor modules with analog outputs. External 10 kΩ resistors are generally unnecessary when using these modules.

## 🔌 Pin Connections

| Component                         | Arduino Pin |
| --------------------------------- | ----------- |
| Top-left sensor analog output     | A0          |
| Top-right sensor analog output    | A1          |
| Bottom-left sensor analog output  | A2          |
| Bottom-right sensor analog output | A3          |
| Horizontal servo signal           | D9          |
| Vertical servo signal             | D10         |
| Sensor power                      | 5V          |
| Common ground                     | GND         |

Connect all sensor and servo grounds to the common ground. Verify the sensor pin labels before connecting the circuit.

## 🧠 Working Principle

1. Four light sensors detect the intensity of light from different directions.
2. The Arduino reads the analog sensor values.
3. The program calculates the average light intensity on the top, bottom, left, and right sides.
4. It compares the readings to determine the brighter direction.
5. When the difference exceeds a predefined threshold, the Arduino adjusts the appropriate servo motor.
6. The process repeats continuously to track changes in light direction.

The horizontal servo controls left-right movement, while the vertical servo controls upward-downward tilt.

## 💻 Technologies Used

* **Programming Language:** Arduino C/C++
* **Microcontroller:** Arduino Uno
* **Simulation Platform:** Wokwi
* **Sensors:** Light-dependent resistor sensor modules
* **Actuators:** Servo motors
* **Application Area:** Renewable energy and embedded systems

## 🧪 Simulation and Testing

The system can be tested under different simulated lighting conditions.

| Test Condition                    | Expected Result                                 |
| --------------------------------- | ----------------------------------------------- |
| Equal light on all sensors        | No movement                                     |
| Left sensors receive more light   | Horizontal adjustment                           |
| Right sensors receive more light  | Horizontal adjustment in the opposite direction |
| Top sensors receive more light    | Vertical adjustment                             |
| Bottom sensors receive more light | Vertical adjustment in the opposite direction   |

Sensor values depend on the module and its circuit. The tracking code must be calibrated to match the actual analog output behavior.

## ✨ Features

* Automatic light-direction detection
* Dual-axis tracking
* Arduino-based control
* Adjustable tracking threshold
* Real-time sensor readings through the Serial Monitor
* Simulation-based development
* No physical hardware required for simulation

## 🌍 Applications

* Solar photovoltaic systems
* Renewable energy research
* Educational electronics projects
* Embedded systems demonstrations
* Solar tracking prototypes
* Microcontroller and sensor interfacing experiments

## ⚠️ Limitations

* Sensor readings can be affected by shadows and surrounding light.
* Sensor calibration may be required.
* The basic algorithm does not calculate the Sun's astronomical position.
* Simulation does not directly measure real solar energy production.
* Physical implementation requires suitable mechanical mounting and power management.

## 🚀 Future Enhancements

* Add voltage and current sensors to measure solar panel output power.
* Develop a real-time monitoring dashboard.
* Implement time-based solar tracking.
* Add weather monitoring and wind protection.
* Compare the energy output of fixed and tracking panels.
* Integrate an LCD or OLED display.

## 📊 Expected Outcome

The simulation demonstrates how a microcontroller can read light sensor values, compare light intensity, and control servo motors to adjust a panel's orientation.

It provides practical experience with embedded programming, analog sensor interfacing, actuator control, and renewable energy applications.

## 👨‍💻 Learning Outcomes

Through this project, students can learn:

* Arduino programming
* Analog sensor interfacing
* Servo motor control
* Conditional statements and control algorithms
* Circuit simulation
* Basic feedback-control concepts

## 📜 Conclusion

The Solar Panel Tracking System demonstrates the application of embedded systems in renewable energy technology. By combining light sensors, an Arduino Uno, and servo motors, the project implements automatic adjustment of panel orientation according to detected light intensity.

The simulation provides a convenient way to develop and test the control logic before considering a physical implementation.

---

**Project Type:** ECE Mini Project
**Domain:** Embedded Systems and Renewable Energy
**Programming Language:** Arduino C/C++
**Simulation:** Wokwi
          https://wokwi.com/projects/478800817325902849



