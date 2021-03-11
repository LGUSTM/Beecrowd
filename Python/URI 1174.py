#-*- coding: utf-8 -*-

lista = []

for i in range(0,100):
    entrada = float(input())
    lista.append(entrada)
    if lista[i] <= 10.0:
        print('A[{}] = {}'.format(i, lista[i]))