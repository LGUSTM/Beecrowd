lista = []

for i in range(0, 20):
    entrada = int(input())
    lista.append(entrada)

a = lista[::-1]

for j in range(20):
    print('N[{}] = {}'.format(j,a[j]))