# Arduino Weather Station


## Overview

This repository contains the code and documentation for a DIY weather station built using an Arduino Uno and DHT11 temperature and humidity sensor. The system provides real-time environmental monitoring with both local display capabilities and serial output for data logging.

## Features

- Real-time temperature monitoring (°C and °F)
- Humidity level monitoring (% RH)
- Data visualization on LCD display
- Serial data output for computer monitoring
- Easy-to-build with common components
- Low power consumption

## Components Required

| Component | Quantity | Purpose |
|-----------|----------|---------|
| Arduino Uno | 1 | Main microcontroller |
| DHT11 Sensor | 1 | Temperature and humidity sensing |
| 16x2 LCD with I2C interface | 1 | Display readings |
| Jumper wires | ~10 | Connections |
| Breadboard | 1 | Component mounting |
| Power supply (5V) or USB cable | 1 | Power source |

## Prerequisites

### Hardware Setup

1. Basic knowledge of Arduino programming
2. Arduino IDE installed on your computer
3. Compatible USB cable for Arduino programming

### Required Libraries

To run this project, you will need to install the following libraries in your Arduino IDE:

1. [DHT Sensor Library by Adafruit](https://github.com/adafruit/DHT-sensor-library)
2. [Adafruit Unified Sensor Library](https://github.com/adafruit/Adafruit_Sensor)
3. [LiquidCrystal I2C Library](https://github.com/johnrickman/LiquidCrystal_I2C)

You can install these libraries through the Arduino Library Manager:
1. Open Arduino IDE
2. Navigate to Sketch > Include Library > Manage Libraries
3. Search for each library name and install

## Circuit Connections

### Wiring Diagram
```
Arduino Uno      DHT11 Sensor      LCD Display (I2C)
-----------      ------------      ----------------
5V        ----->  VCC              VCC
GND       ----->  GND              GND
Digital 2  ----->  Data
Analog A4  ------------------------>  SDA
Analog A5  ------------------------>  SCL
```

![Circuit Diagram](https://github.com/AddyB0t/IOT-Weather-Station/blob/main/Circuit%20Diagram.png)

### Demonstration
![Demonstration](https://github.com/AddyB0t/IOT-Weather-Station/blob/main/Demonstration.png)

### Detailed Connections

- **DHT11 Sensor:**
  - VCC → Arduino 5V
  - GND → Arduino GND
  - Data → Arduino Digital Pin 2

- **LCD Display (I2C):**
  - VCC → Arduino 5V
  - GND → Arduino GND
  - SDA → Arduino Analog Pin A4
  - SCL → Arduino Analog Pin A5

## Setup and Usage

1. Clone this repository to your local machine:
   ```
   git clone https://github.com/yourusername/arduino-weather-station.git
   ```

2. Connect all components according to the circuit diagram

3. Install the required libraries in your Arduino IDE

4. Open the EXPERIMENT-1.ino file in Arduino IDE

5. Select the correct board (Arduino Uno) and port from Tools menu

6. Upload the code to your Arduino

7. The LCD will display temperature and humidity readings

8. Open the Serial Monitor (set to 9600 baud) to view the readings on your computer

## Performance Specifications

- **Temperature Range:** 0°C to 50°C (± 0.5°C accuracy)
- **Humidity Range:** 20% to 90% RH (± 2% accuracy)
- **Measurement Interval:** 2 seconds
- **Display Update Rate:** 2 seconds
- **Power Consumption:** ~50mA (typical operation)

## Troubleshooting

### Common Issues

1. **No readings on LCD display:**
   - Check I2C address of the LCD display
   - Verify all connections
   - Ensure libraries are properly installed

2. **DHT11 readings showing as NaN or invalid:**
   - Check DHT11 connections
   - Try adding a 10K pull-up resistor between data pin and VCC
   - Ensure the sensor is not damaged

3. **Arduino not uploading:**
   - Verify correct port and board selection
   - Check USB cable connection
   - Restart Arduino IDE

## Future Enhancements

- Add barometric pressure sensor (BMP280)
- Implement data logging to SD card
- Create web interface for remote monitoring
- Add solar power capability for outdoor deployment

## Contributing

Contributions to improve the project are welcome. Please follow these steps:

1. Fork the repository
2. Create a feature branch: `git checkout -b feature-name`
3. Commit your changes: `git commit -m 'Add some feature'`
4. Push to the branch: `git push origin feature-name`
5. Submit a pull request

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgements

- [Adafruit](https://www.adafruit.com/) for their excellent DHT libraries
- [Arduino](https://www.arduino.cc/) community for inspiration and support

## Contact

If you have any questions or suggestions, please open an issue in this repository or contact me
