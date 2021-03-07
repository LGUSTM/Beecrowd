import math

while True:
    entrada= input()

    if entrada == '0': 
        break

    x1, x2, x3 = entrada.split()

    area = ((int(x1) * int(x2)) * 100) /int(x3)
    lado = int(math.sqrt(area))

    print('{}'.format(lado))