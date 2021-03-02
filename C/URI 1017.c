#include <stdio.h>

int main() {
    int x, y;
    double distancia, consumo;
    
    scanf("%i %i", &x, &y);
    
    distancia = x * y ;
    consumo = distancia / 12;
    
    printf("%.3lf\n", consumo);
    
    return 0;
}
