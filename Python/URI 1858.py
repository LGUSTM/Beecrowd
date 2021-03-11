# -*- coding: utf-8 -*-

tentativas = []
posição = 1

n = int(input())
linha = input().split()

for i in range(len(linha)):
    tentativas.append(linha[i]) 

menor = tentativas[0]

for i in range(n):
    if tentativas[i] < menor:
        menor = tentativas[i]
        posição = i + 1

print("{}".format(posição))