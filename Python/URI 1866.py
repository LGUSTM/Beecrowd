#-*- coding: utf-8 -*-

qtdecasos = int(input())

for i in range(qtdecasos):
    soma = 0

    qtdesoma = int(input())

    for j in range(qtdesoma):
        if (j+1)%2 != 0:
            soma = soma + 1
        else:
            soma  = soma - 1

    print("{}".format(soma))