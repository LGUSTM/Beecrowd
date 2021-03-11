def winner(a, b, cont):
    if a == 'tesoura' and b == 'papel':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'papel' and b == 'pedra':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'pedra' and b == 'lagarto':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'lagarto' and b =='Spock':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'Spock' and b == 'tesoura':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'tesoura' and b == 'lagarto':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'lagarto' and b == 'papel':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'papel' and b == 'Spock':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'Spock' and b == 'pedra':
        print('Caso #{}: Bazinga!'.format(cont))
    if a == 'pedra' and b == 'tesoura':
        print('Caso #{}: Bazinga!'.format(cont))

    if b == 'tesoura' and a == 'papel':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'papel' and a == 'pedra':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'pedra' and a == 'lagarto':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'lagarto' and a =='Spock':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'Spock' and a == 'tesoura':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'tesoura' and a == 'lagarto':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'lagarto' and a == 'papel':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'papel' and a == 'Spock':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'Spock' and a == 'pedra':
        print('Caso #{}: Raj trapaceou!'.format(cont))
    if b == 'pedra' and a == 'tesoura':
        print('Caso #{}: Raj trapaceou!'.format(cont))
   
    if a == b:
        print('Caso #{}: De novo!'.format(cont))


def main():
    n = int(input())
    for i in range(n):
        s, r = input().split()

        winner(s, r, i+1)
main()