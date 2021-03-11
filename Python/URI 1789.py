#-*- coding: utf-8 -*-

while True:
    try:
        n = int(input())
        x = input().split()
        m = 0
        for i in range(n):
            if int(x[i]) > m:
                m = int(x[i])
        if m < 10:
            N = 1
        if m >= 10 and m <20:
            N = 2
        if m >= 20:
            N = 3
        print(N)
    except EOFError:
        break