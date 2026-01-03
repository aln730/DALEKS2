import serial
import time


roomba = serial.Serial('/dev/serial0', baudrate=115200, timeout=1)
