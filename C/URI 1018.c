#include <stdio.h>

int main() {
    int x, cont=0;

    scanf("%i", &x);
    printf("%i\n", x);
    
    cont = x / 100;
    printf("%i nota(s) de R$ 100,00\n", cont);
    cont = x % 100;
    cont = cont / 50;
    printf("%i nota(s) de R$ 50,00\n", cont);
    cont = x % 100;
    cont = cont % 50;
    cont = cont / 20;
    printf("%i nota(s) de R$ 20,00\n", cont);
    cont = x % 100;
    cont = cont % 50;
    cont = cont % 20;
    cont = cont / 10;
    printf("%i nota(s) de R$ 10,00\n", cont);
    cont = x % 100;
    cont = cont % 50;
    cont = cont % 20;
    cont = cont % 10;
    cont = cont / 5;
    printf("%i nota(s) de R$ 5,00\n", cont);
    cont = x % 100;
    cont = cont % 50;
    cont = cont % 20;
    cont = cont % 10;
    cont = cont % 5;
    cont = cont / 2;
    printf("%i nota(s) de R$ 2,00\n", cont);
    cont = x % 100;
    cont = cont % 50;
    cont = cont % 20;
    cont = cont % 10;
    cont = cont % 5;
    cont = cont % 2;
    printf("%i nota(s) de R$ 1,00\n", cont);
    
    return 0;
}