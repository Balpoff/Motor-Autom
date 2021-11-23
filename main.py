from SerialCommand import Com

s = Com(ARDPath="/dev/ttyUSB0", portSpeed=115200)

while True:
    i = int(input())
    s.writeCmd_(i)  # from 90 to 255
