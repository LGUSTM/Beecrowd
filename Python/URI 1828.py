n = int(input())

for i in range(n):
    sheldon, raj = input().split(" ", 1)
    if sheldon == raj:
        print('Caso #{}: De novo!'.format(n))
    else:
        if sheldon == 'tesoura' and raj == 'papel':
            print('Caso #{}: Bazinga'.format(n))
        else:
            if raj == 'tesoura' and sheldon == 'papel':
                print('Caso #{}: Raj trapaceou!'.format(n))
            else:
                if sheldon == 'papel' and raj == 'pedra':
                    print('Caso #{}: Bazinga'.format(n))
                else:
                    if raj == 'papel' and sheldon == 'pedra':
                        print('Caso #{}: Raj trapaceou!'.format(n))
                    else:
                        if sheldon == 'pedra' and raj == 'lagarto':
                            print('Caso #{}: Bazinga'.format(n))
                        else:
                            if raj == 'pedra' and sheldon == 'lagarto':
                                print('Caso #{}: Raj trapaceou!'.format(n))
                            else:
                                if sheldon == 'lagarto' and raj == 'spock':
                                    print('Caso #{}: Bazinga'.format(n))
                                else:
                                    if raj == 'lagarto' and sheldon == 'spock':
                                        print('Caso #{}: Raj trapaceou!'.format(n))
                                    else:
                                        if sheldon == 'spock' and raj == 'tesoura':
                                            print('Caso #{}: Bazinga'.format(n))
                                        else:
                                            if raj == 'spock' and sheldon == 'tesoura':
                                                print('Caso #{}: Raj trapaceou!'.format(n))
                                            else:
                                                if sheldon == 'tesoura' and raj == 'lagarto':                                                        
                                                    print('Caso #{}: Bazinga'.format(n))
                                                else:
                                                    if raj == 'tesoura' and sheldon == 'lagarto':
                                                        print('Caso #{}: Raj trapaceou!'.format(n))
                                                    else:
                                                        if sheldon == 'lagarto' and raj == 'papel':
                                                            print('Caso #{}: Bazinga'.format(n))
                                                        else:
                                                            if raj == 'lagarto' and sheldon == 'papel':
                                                                print('Caso #{}: Raj trapaceou!'.format(n))
                                                            else:
                                                                if sheldon == 'papel' and raj == 'spock':
                                                                    print('Caso #{}: Bazinga'.format(n))
                                                                else:                                                                        
                                                                    if raj == 'papel' and sheldon == 'spock':
                                                                        print('Caso #{}: Raj trapaceou!'.format(n))
                                                                    else:
                                                                        if sheldon == 'spock' and raj == 'pedra':
                                                                            print('Caso #{}: Bazinga'.format(n))
                                                                        else:
                                                                            if raj == 'spock' and sheldon == 'pedra':
                                                                                print('Caso #{}: Raj trapaceou!'.format(n))
                                                                            else:
                                                                                if sheldon == 'pedra' and raj == 'tesoura':
                                                                                    print('Caso #{}: Bazinga'.format(n))
                                                                                else:
                                                                                    if raj == 'pedra' and sheldon == 'tesoura':
                                                                                        print('Caso #{}: Raj trapaceou!'.format(n))