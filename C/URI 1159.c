#include <stdio.h>

int main(){
    int input, x = 0, cont = 0, soma = 0;
    
    while(1){
        scanf("%d", &input);
        if(input == 0){
            break;
        }
        else{
            do{
                if(input%2 == 0){
                    soma = soma + input;
                    cont++;
                }
                input++;
            }while(cont < 5);
            printf("%d\n", soma);
            cont = 0;
            soma = 0;
        }
    }
    
    return 0;
}