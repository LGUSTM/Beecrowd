while True:
    try:
        n = int(input())
        a = [[0] * n for i in range(n)]
        for i in range(n):
            for j in range(n):
                if (i+j) == (n-1):
                    a[i][j] = 2
                elif i == j:
                    a[i][j] = 1
                else:
                    a[i][j] = 3
        for row in a:
            print(''.join([str(elem) for elem in row]))

    except EOFError:
        break