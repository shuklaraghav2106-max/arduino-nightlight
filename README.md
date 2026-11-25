# arduino-nightlight
An Arduino automatic nightlight that uses a photoresistor (LDR) voltage divider to measure ambient light and automatically switches an LED on in the dark.

**Components:**
- a photoresistor
- a LED
- 1 10k ohm resistor
- 1 220 ohm resistor
- Jumper wires

**Circuit Schematic**

<img width="945" height="682" alt="image" src="https://github.com/user-attachments/assets/74107975-d711-4224-b558-d907deb6ae6a" />

**Problems/bugs**

Fixed rapid LED flickering near the threshold boundary by introducing a short delay to smooth out the sensor readings.
