while True:
    n = int(input())
    a = [[0] * n for i in range(n)]
    if n == 0:
        break
    else:
        a[0][0] = 0
        aux = 0;
        while True:
            for i in range(aux, n):
                if i == aux:
                    for j in range(aux, n):
                        if j == 0:
                            a[i][j] = 1
                        else:
                            a[i][j] = a[i][j-1] + 1
            aux = aux + 1
            if aux == n:
                break
        aux = 1;
        for i in range(1, n):
            for j in range(aux):
                a[i][j] = a[i-1][j] + 1
            aux = aux + 1
        for i in range(n):
            tx = ''
            for j in range(n):
                tx += " %3d" %a[i][j]
            print(tx[1:])
        print("")  
                        
