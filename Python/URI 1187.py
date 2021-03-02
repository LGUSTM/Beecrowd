a = []

b = input().upper()

for i in range(12):
    a.append([])
    for j in range(12):
        x = float(input())
        a[i].append(x)

if b == 'S':
     soma = 0
     aux = 11
     aux1 = 1
     for i in range(5):
         for j in range(aux1, aux):
            soma = soma + a[i][j]
         aux = aux - 1
         aux1 = aux1 + 1
     print('{:.1f}'.format(soma))
else:
    if b == 'M':
        avg = 0
        aux = 11
        aux1 = 1
        aux2 = 0
        for i in range(5):
            for j in range(aux1, aux):
                avg = avg + a[i][j]
                aux2 = aux2 + 1
            aux = aux - 1
            aux1 = aux1 + 1
        avg = avg / aux2
        print('{:.1f}'.format(avg))
