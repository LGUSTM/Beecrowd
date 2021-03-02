#include <stdio.h>

int main()
{
    int x, y, z, maior, medio, menor;
    char medio1, medio2;
    
    scanf("%i %i %i", &x, &y, &z);
    
    if(x>y && x>z){
        maior = x;
        medio1 = 'x';
    }
    else{
        if(y>x && y>z){
            maior = y;
            medio1 = 'y';
        }
        else{
            if(z>x && z>y){
                maior = z;
                medio1 = 'z';
            }
        }
    }
    
    if(x<y && x<z){
        menor = x;
        medio2 = 'x';
    }
    else{
        if(y<x && y<z){
            menor = y;
            medio2 = 'y';
        }
        else{
            if(z<x && z<y){
                menor = z;
                medio2 = 'z';
            }
        }
    }
    
    if(medio1 == 'x' && medio2 == 'y' || medio1 == 'y' && medio2 == 'x'){
        medio = z;
    }
    else{
        if(medio1 == 'y' && medio2 == 'z' || medio1 == 'z' && medio2 == 'y'){
            medio = x;
        }
        else{
            if(medio1 == 'x' && medio2 == 'z' || medio1 == 'z' && medio2 == 'x'){
                medio = y;
            }
        }
    }
    
    printf("%i\n%i\n%i\n", menor, medio, maior);
    printf("\n%i\n%i\n%i\n", x, y, z);

    return 0;
}
