#include <stdio.h>

int main() {
    int x, y;
    double valor;
    
    scanf("%i %i", &x, &y);
    
    if(x == 1){
        valor = 4.00 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    if(x == 2){
        valor = 4.50 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    if(x == 3){
        valor = 5.00 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    if(x == 4){
        valor = 2.00 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    if(x == 5){
        valor = 1.50 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    
    return 0;
}
