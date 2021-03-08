from math import ceil, floor

while True:
    try:
        n = int(input())
        m = [[0] * n for i in range(n)]

        for i in range(n):
            for j in range(n):
                m[i][j] = 0;

        x = n/2
        x = floor(x)
        if n > 5:
            aux = int(floor(n / 3))
        else:
            aux = int(floor(x / 2))

        for i in range(aux, n-aux):
            for j in range(aux, n-aux):
                if i == x and j == x:
                    m[i][j] = 4
                else:
                    m[i][j] = 1

        for i in range(n):
            for j in range(n):
                if (i+j) == (n-1) and m[i][j] == 0:
                    m[i][j] = 3
                elif i == j and m[i][j] == 0:
                    m[i][j] = 2

        for row in m:
            print(''.join([str(elem) for elem in row]))
        print("")

    except EOFError:
        break