#-*- coding: utf-8 -*-

while True:
    n = int(input())
    a = [[0] * n for i in range(n)]
    if n == 0:
        break
    if n == 1:
        print("1")
        print("")
    else:
        if n == 2:
            print("1 2")
            print("2 4")
            print("")
        else:
            for i in range(n):
                if i == 0:
                    a[i][0] = 1
                else:
                    a[i][0] = a[i-1][0] * 2
                for j in range(1, n):
                    if j == 0:
                        a[i][j] = 1
                    else:
                        a[i][j] = a[i][j-1] * 2
                        
            for i in range(n):
                tx = ''
                for j in range(n):
                    if a[n-1][n-1] < 100:
                        tx += " %2d" %a[i][j]
                    elif a[n-1][n-1] < 1000:
                        tx += " %3d" %a[i][j]
                    elif a[n-1][n-1] < 10000:
                        tx += " %4d" %a[i][j]
                    elif a[n-1][n-1] < 100000:
                        tx += " %5d" %a[i][j]
                    elif a[n-1][n-1] < 1000000:
                        tx += " %6d" %a[i][j]
                    elif a[n-1][n-1] < 10000000:
                        tx += " %7d" %a[i][j]
                    elif a[n-1][n-1] < 1000000000:
                        tx += " %8d" %a[i][j]
                print(tx[1:])
            print("")  
            T = len(str(a[n-1][n-1]))
            for i in range(n):
                for j in range(n):
                    a[i][j] = str(a[i][j])
                    while len(a[i][j]) < T:
                        a[i][j] = ' ' + a[i][j]
                A = ' '.join(a[i])
                print(A)
            print()
