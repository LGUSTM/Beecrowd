#-*- coding: utf-8 -*-

a = []
soma = 0

b = input().upper()

for i in range(12):
    a.append([])
    for j in range(12):
        x = float(input())
        a[i].append(x)

for i in range(1, 11):
    if i <= 5:
        aux = 11
        for j in range(11, 11-i, -1):
            soma = soma + a[i][j]
    else:
        aux = 1
        for j in range(11, i, -1):
            soma = soma + a[i][j]

if b == 'M':
    soma = soma / ((144 - 12 - 12) / 4)

print('{:.1f}'.format(soma))
