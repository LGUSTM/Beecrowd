#include <stdio.h>
#include <math.h>

int main() {
    double x; 
    int cont=0, moedas;
    

    scanf("%lf", &x);
    printf("NOTAS:\n");
    
    cont = x;
    cont = cont / 100;
    printf("%i nota(s) de R$ 100.00\n", cont);
    cont = x;
    cont = cont % 100;
    cont = cont / 50;
    printf("%i nota(s) de R$ 50.00\n", cont);
    cont = x;
    cont = cont % 100;
    cont = cont % 50;
    cont = cont / 20;
    printf("%i nota(s) de R$ 20.00\n", cont);
    cont = x;
    cont = cont % 100;
    cont = cont % 50;
    cont = cont % 20;
    cont = cont / 10;
    printf("%i nota(s) de R$ 10.00\n", cont);
    cont = x;
    cont = cont % 100;
    cont = cont % 50;
    cont = cont % 20;
    cont = cont % 10;
    cont = cont / 5;
    printf("%i nota(s) de R$ 5.00\n", cont);
    cont = x;
    cont = cont % 100;
    cont = cont % 50;
    cont = cont % 20;
    cont = cont % 10;
    cont = cont % 5;
    cont = cont / 2;
    printf("%i nota(s) de R$ 2.00\n", cont);
    printf("MOEDAS:\n");
    cont = x;
    cont = cont % 100;
    cont = cont % 50;
    cont = cont % 20;
    cont = cont % 10;
    cont = cont % 5;
    cont = cont % 2;
    printf("%i moeda(s) de R$ 1.00\n", cont);
    cont = x;
    moedas = (int)round((x - cont) * 100);
    moedas = moedas / 50;
    printf("%i moeda(s) de R$ 0.50\n", moedas);
    cont = x;
    moedas = (int)round((x - cont) * 100);
    moedas = moedas % 50;
    moedas = moedas / 25;
    printf("%i moeda(s) de R$ 0.25\n", moedas);
    cont = x;
    moedas = (int)round((x - cont) * 100);
    moedas = moedas % 50;
    moedas = moedas % 25;
    moedas = moedas / 10;
    printf("%i moeda(s) de R$ 0.10\n", moedas);
    cont = x;
    moedas = (int)round((x - cont) * 100);
    moedas = moedas % 50;
    moedas = moedas % 25;
    moedas = moedas % 10;
    moedas = moedas / 5;
    printf("%i moeda(s) de R$ 0.05\n", moedas);
    cont = x;
    moedas = (int)round((x - cont) * 100);
    moedas = moedas % 50;
    moedas = moedas % 25;
    moedas = moedas % 10;
    moedas = moedas % 5;
    printf("%i moeda(s) de R$ 0.01\n", moedas);
    
    return 0;
}