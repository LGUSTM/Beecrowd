#include <stdio.h>

int main()
{
    int entrada, dia, mes, ano, cont;
    
    scanf("%i", &entrada);
    
    ano = entrada / 365;
    cont = entrada % 365;
    mes = cont / 30;
    cont = cont % 30;
    dia = cont;
    
    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);

    return 0;
}