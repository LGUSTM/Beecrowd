#include <stdio.h>
 
int main() {
    int inicio, fim, total;
    
    scanf("%i %i", &inicio, &fim);
    

    if(inicio < fim){
        total= fim - inicio;
    }
    else{
        total= fim - inicio;
        total = (24-inicio) + fim;
    }
    
    printf("O JOGO DUROU %i HORA(S)\n", total);
    
    return 0;
}