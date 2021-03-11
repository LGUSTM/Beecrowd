#-*- coding: utf-8 -*-

par = []
impar = []
qtdepar = 0
qtdeimpar = 0

for i in range(0, 15):
    x = (int(input()))
    if x % 2 == 0:
        par.insert(qtdepar, x)
        qtdepar = qtdepar + 1
        if qtdepar == 5:
            for j in range(0, 5):
                print('par[{}] = {}'.format(j, par[j]))
            qtdepar = 0
    else:
        impar.insert(qtdeimpar, x)
        qtdeimpar = qtdeimpar + 1
        if qtdeimpar == 5:
            for j in range(0, 5):
                print('impar[{}] = {}'.format(j, impar[j]))
            qtdeimpar = 0

for i in range(0, qtdeimpar):
    print('impar[{}] = {}'.format(i, impar[i]))

for i in range(0, qtdepar):
    print('par[{}] = {}'.format(i, par[i]))
