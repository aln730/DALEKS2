import serial
import time

# Open serial connection to Roomba
roomba = serial.Serial(
    port="/dev/serial0",
    baudrate=115200,
    timeout=1
)

def log(msg):
    print(f"[PYTHON] {msg}")

log("Storing songs in the Roomba")

roomba.write(bytes([
    140,  # Store Song
    1,    # Song number
    2,    # Number of notes
    60, 16,
    60, 16
]))

roomba.write(bytes([
    140,  # Store Song
    2,    # Song number
    6,    # Number of notes
    60, 100,
    80, 100,
    60, 100,
    80, 100,
    60, 100
]))

time.sleep(0.5)

log("Playing the song")
roomba.write(bytes([
    141,
    1
]))

time.sleep(0.5)
