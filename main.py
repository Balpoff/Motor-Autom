from SerialCommand import Com

s = Com(ARDPath="COM4", portSpeed=115200)

while True:
    s.writeCmd_(0)  # from 90 to 255
