resultado = 0
cont = 0

while True:
    entrada = input()

    if entrada != "caw caw":
        if entrada == "--*":
            resultado = resultado + 1
        elif entrada == "-*-":
            resultado = resultado + 2
        elif entrada == "-**":
            resultado = resultado + 3
        elif entrada == "*--":
            resultado = resultado + 4
        elif entrada == "*-*":
            resultado = resultado + 5
        elif entrada == "**-":
            resultado = resultado + 6
        elif entrada == "***":
            resultado = resultado + 7
    else:
        print("{}".format(resultado))
        resultado = 0
        cont = cont + 1
    
    if cont == 3:
        break