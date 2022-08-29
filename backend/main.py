import serial

s = serial.Serial('COM5', baudrate = 9600, timeout = 1)

while True:
    data = s.readline().decode('ascii')
    print(data)
