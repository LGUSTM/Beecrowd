#include <stdio.h>

int main(){
    int a, z, input, x, soma = 0;
    
    scanf("%d", &a);
    
    if(a >= 1 && a <= 100){
        for(z = 0; z < a; z++){
            scanf("%d", &input);
            if(input >= 1 && input <= 100000000)
                for(x = 1; x < input; x++){
                    if(input%x == 0){
                        soma = soma + x;
                    }
                }
                if(soma == input){
                    printf("%d eh perfeito\n", input);
                }
                else{
                    printf("%d nao eh perfeito\n", input);
                }
                soma = 0;
        }
    }

    return 0;
}
