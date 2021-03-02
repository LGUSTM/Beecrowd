#include <stdio.h>

int main(){
    int input, a, b, x = 0, cont = 0, soma = 0;
    
    scanf("%d", &input);
    
    for(x = 0; x < input; x++){
        scanf("%d %d", &a, &b);
        do{
            if(a%2!=0){
                soma = soma + a;
                cont = cont + 1;
            }
            a++;
        }while(cont < b);
        printf("%d\n", soma);
        cont = 0;
        soma = 0;
    }
    
    return 0;
}