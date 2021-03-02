#include <stdio.h>

int main()
{
    char nome_vendedor;
    double salario, totalVendas;
    
    scanf("%s", &nome_vendedor);
    scanf("%lf %lf", &salario, &totalVendas);
    
    printf("TOTAL = R$ %.2f\n", (salario+totalVendas*0.15));

    return 0;
}
