 #-*- coding: utf-8 -*-

ncases = int(input())

for i in range(ncases):
    name1, choose1, name2, choose2 = input().split()
    number1, number2 = input().split()

    numbersum = int(number1) + int(number2)

    if numbersum%2 == 0:
        if choose1 == "PAR":
            print("{}".format(name1))
        elif choose2 == "PAR":
            print("{}".format(name2))
    else:
        if choose1 == "IMPAR":
            print("{}".format(name1))
        elif choose2 == "IMPAR":
            print("{}".format(name2))