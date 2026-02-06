# Robotics-coding-Tasks
# Arduino LED Blink using Button

This is a simple Arduino project where I used a push button to control whether an LED blinks or not. Each time the button is pressed, the blinking state toggles — press once to start blinking, press again to stop. The blink speed can be changed directly from the code using a delay value.

# What it does
- Reads button input on pin 2 using INPUT_PULLUP  
- Toggles a blinking mode on every button press  
- Blinks LED on pin 13 when enabled  
- Keeps LED off when blinking mode is disabled  

# Components used
- Arduino board  
- LED  
- Push button  
- Breadboard and jumper wires  

# Connections
- LED → Pin 13  
- Button → Pin 2 and GND  

# How to run
Open the sketch in Arduino IDE, select your board and port, and upload the code. Press the button to turn blinking on or off.

# Note
Blink speed can be changed:
`int blinkspeed=500;`

— Diya Dheeraj Dawra
