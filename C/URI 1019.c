#include <stdio.h>

int main()
{
    int entrada, segundos, minutos, horas, cont;
    
    scanf("%i", &entrada);
    
    horas = entrada / 3600;
    cont = entrada % 3600;
    minutos = cont / 60;
    cont = cont % 60;
    segundos = cont;
    
    printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}