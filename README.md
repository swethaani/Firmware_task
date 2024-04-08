# Project title - UART Communication with MCU using EEPROM 

This project demonstrates bidirectional communication between a PC and a microcontroller unit (MCU) using UART (Universal Asynchronous Receiver-Transmitter) protocol. The MCU used in this project is an ATmega328 U microcontroller programmed with Embedded C++. The project involves storing data received from the PC into the MCU's EEPROM (Electrically Erasable Programmable Read-Only Memory) and sending the stored data back to the PC.

##Key Features

**Bidirectional UART Communication**: Establishes bidirectional communication between a PC and an MCU using UART protocol. Enables data transmission from the PC to the MCU and vice versa.
**EEPROM Storage**: Stores data received from the PC into the MCU's EEPROM memory, allowing retention of data even when powered off. Suitable for applications requiring non-volatile storage.
**Non-Standard Library Usage**: Demonstrates direct register manipulation for EEPROM read/write operations instead of using standard libraries like <EEPROM.h>. Enhances understanding of low-level hardware interaction and reduces memory footprint.

##Requirements

Microcontroller Board: Any board featuring the ATmega328 microcontroller.
USB-to-Serial Cable: Required to establish communication between the microcontroller board and the PC.
**Python Version 3.7**: Ensure that Python 3.7 or later version is installed on your system.
**PySerial Library**: Install the PySerial library to facilitate serial communication between the PC and the microcontroller board

##How to Use

Connect Microcontroller Board: Connect the microcontroller board to the PC using a USB-to-Serial cable.
Ensure Power Supply: Ensure the microcontroller board is adequately powered.
Upload Firmware: Upload the provided uart_communication firmware to the microcontroller board using a suitable programmer or development board.
Python Installation: Ensure Python version 3.7 or later is installed on your system.
Install pyserial:install the pyserial libarary
Data sent from the PC will be received by the MCU and stored in the EEPROM.
Upon request from the PC, the MCU will send the stored data back to the PC.
