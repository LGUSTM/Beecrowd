lista = []
i = 0

T = int(input())

for j in range(0, 1000):
    lista.append(i)
    print('N[{}] = {}'.format(j, i))
    i = i + 1
    if i >= T:
        i = 0