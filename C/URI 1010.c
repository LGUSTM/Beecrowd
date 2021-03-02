#include <stdio.h>
 
int main() {
    int cod1, cod2, num1, num2;
    double val1, val2;
    
    scanf("%i %i %lf\n", &cod1, &num1, &val1);
    scanf("%i %i %lf\n", &cod2, &num2, &val2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", (num1*val1 + num2*val2));

    return 0;
}
