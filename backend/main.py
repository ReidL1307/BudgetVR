import serial
from flask import Flask
from threading import Thread


s = serial.Serial('COM5', baudrate = 9600, timeout = 1)
app = Flask(__name__)
        
@app.route("/")
def index():   
    global s
    data = s.readline().decode('ascii')
    return data
    
app.run(host="0.0.0.0", port=3000)