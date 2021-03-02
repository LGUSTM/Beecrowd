posicao = 0

T = int(input())

lista = input()

lista = lista.split()

for i in range(len(lista)):
    lista[i] = int(lista[i])

menor = lista[0]

for i in range(len(lista)):
    if lista[i] < menor:
        menor = lista[i]
        posicao = i

print('Menor valor: {}'.format(menor))
print('Posicao: {}'.format(posicao))