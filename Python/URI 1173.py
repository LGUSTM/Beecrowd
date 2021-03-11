#-*- coding: utf-8 -*-

X = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
y = int(input())

for i in range(len(X)):
    if i == 0:
        X[i] = y
    else:
        X[i] = X[i-1] * 2
    print('N[{}] = {}'.format(i, X[i]))
