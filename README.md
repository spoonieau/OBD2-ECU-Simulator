# OBD2-ECU-Simulator
Arduino Uno powered OBD2 ECU Simulator 'Stand alone or qt5 GUI control'

## Hardware required
-Ardunio Uno<br/>
-MCP2515 or MCP25625 shield or controller<br/>
-OBD2 to DB9 cable, buy or make your own<br/>

## Build Depends 
-MCP_CAN Library https://github.com/coryjfowler/MCP_CAN_lib<br/>
-QT5 https://www.qt.io/<br/>

## Status
-Custom VIN<br/>
-Custom Calibration ID<br/>
-Custom ECU Name<br/>
-Set OBD2 Standard<br/>
-Set Fuel type coding<br/>
-Supported PID's 0x05, 0x0C, 0x0D, 0x0E, 0x0F, 0x10<br/>
-Random PID's<br/>
-Retrive DTC *one only<br/>
-Clear DTC<br/>

Currently the Ardunio source is in random value standalone mode. Can view the raw frames << >> via serial monitor in the Ardunio IDE.

## Todo
-Complete GUI<br/>
-Wire up Firmware with GUI<br/>
-Add more PID'S<br/>
-Implement a more dynamic DTC<br/>

## Tested With
-ELM327 USB with Torque ‘Android’ <br/>
-Foxwell NT650<br/>

## Instructions
The CAN shield or controller needs to have it’s CAN_H and CAN_L Terminated. On my shield I had to solder join ‘J3’. <br/>
Check the documentation of your CAN controller.


