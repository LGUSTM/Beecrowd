#-*- coding: utf-8 -*-

lista = []

num = float(input())

for i in range(0, 100):
    if i == 0:
        lista.append(num)
    else:
        num = num / 2
        lista.append(num)
    print('N[{}] = {:.4f}'.format(i, num))