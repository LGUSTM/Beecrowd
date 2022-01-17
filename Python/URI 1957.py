# -*- coding: utf-8 -*-

decimal = int(input())
letters = ['A','B','C','D','E','F']
hexa = ''

if decimal < 10:
    print("{}".format(decimal))
elif decimal >= 10 and decimal <= 15:
    decimal = decimal % 10
    print("{}".format(letters[decimal]))
else:
    while decimal != 0:
        rest = decimal % 16
        if rest >= 10 and rest <= 15:
            indice = rest % 10
            hexa += letters[indice]
        else:
            hexa += str(rest)
        decimal = decimal // 16
        
    print("{}".format(hexa[::-1]))

