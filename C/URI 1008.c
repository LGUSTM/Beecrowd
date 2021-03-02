#include <stdio.h>
 
int main() {
 
	int NumFun, HorasTrab;
	float ValHora, Sal;
	
	scanf("%i%i%f",&NumFun, &HorasTrab, &ValHora);
	Sal = HorasTrab * ValHora;
	printf("NUMBER = %i\n", NumFun);
	printf("SALARY = U$ %.2f\n", Sal);
 
    return 0;
}