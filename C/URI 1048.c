#include <stdio.h>

int main()
{   
    double salary, increase, rate;
    int percentual;
    
    scanf("%lf", &salary);
    
    if(salary > 0 && salary <= 400){
        rate = 0.15;
        increase = salary * rate;
        salary = salary + increase;
        percentual = rate*100;
        
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", increase);
        printf("Em percentual: %i %%\n", percentual);
    }
    else if(salary > 400 && salary <= 800){
        rate = 0.12;
        increase = salary * rate;
        salary = salary + increase;
        percentual = rate*100;
        
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", increase);
        printf("Em percentual: %i %%\n", percentual);
    }
    else if(salary > 800 && salary <= 1200){
        rate = 0.10;
        increase = salary * rate;
        salary = salary + increase;
        percentual = rate*100;
        
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", increase);
        printf("Em percentual: %i %%\n", percentual);
    }
    else if(salary > 1200 && salary <= 2000){
        rate = 0.07;
        increase = salary * rate;
        salary = salary + increase;
        percentual = rate*100;
        
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", increase);
        printf("Em percentual: %i %%\n", percentual);
    }
    else if(salary > 2000){
        rate = 0.04;
        increase = salary * rate;
        salary = salary + increase;
        percentual = rate*100;
        
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", increase);
        printf("Em percentual: %i %%\n", percentual);
    }

    return 0;
}
