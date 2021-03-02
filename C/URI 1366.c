#include <stdio.h>

void vareta(){
	int i, nentrada, soma = 0, result, tamanho;
	int matriz[1000];
	
	scanf("%i", &nentrada);
	if (nentrada == 0){
		return;
	}
	else{
		for(i=0; i < nentrada; i++){
			scanf("%i", &tamanho);
			scanf("%i", &matriz[i]);
			if (matriz[i] % 2 != 0){
				matriz[i] = matriz[i] - 1;
			}
			soma = soma + matriz[i];
		}
		result = soma/4;
		printf("%i\n", result);
		return vareta();
	}
}

int main (){
	
	vareta();	
	return 0;
}