#include <stdio.h>

int main(){   
    double salary, taxe;
    
    scanf("%lf", &salary);
    
    if(salary < 2000){
        printf("Isento\n");
    }
    if(salary > 2000 && salary <= 3000){
        salary = salary - 2000;
        taxe = salary * 0.08;
        printf("R$ %.2f\n", taxe);
    }
    else if(salary > 3000 && salary <= 4500){
        taxe = 1000 * 0.08;
        taxe = taxe + ((salary - 3000) * 0.18);
        printf("R$ %.2f\n", taxe);
    }
    else if(salary > 4500){
        taxe = 1000 * 0.08;
        taxe = taxe + (1500 * 0.18);
        taxe = taxe + ((salary - 4500) * 0.28);
        printf("R$ %.2f\n", taxe);
    }
    
    return 0;
}
