#include <stdio.h>
 
int main() {
    int x;
    double y, consumo;
    
    scanf("%i %lf", &x, &y);
    
    consumo = x/y;
    
    printf("%.3f km/l\n", consumo);
    
    return 0;
}