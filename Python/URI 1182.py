n = 12
soma = 0
avg = 0
a = [[0] * n for i in range(n)]

coluna = int(input())
b = input().upper()

for i in range(0, n):
    for j in range(0, n):
        a[i][j] = float(input())

if b == 'S':
     for k in range(0, n):
          soma = soma + a[k][coluna]
     print('{:.1f}'.format(soma))
else:
    if b == 'M':
        for k in range(0, n):
            avg = avg + a[k][coluna]
        avg = avg / 12
        print('{:.1f}'.format(avg))