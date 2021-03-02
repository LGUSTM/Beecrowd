#include <stdio.h>
 
int main() {
    int a, b, cont, aux, soma = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a > b){
        for(aux = (b+1); aux < a; aux++){
            if(aux%2 != 0){
                soma = soma + aux;
            }
        }
    }
    else if(b > a){
        for(aux = a; aux < b; aux++){
            if(aux%2 != 0){
                soma = soma + aux;
            }
        }
    }
    
    printf("%d\n", soma);
 
    return 0;
}
