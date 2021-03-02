#include <stdio.h>
 
int main() {
    int x, cont, aux;
    
    scanf("%d", &x);
    aux = x;
    
    if(aux%2 == 0){
        aux = aux + 1;
    }
    
    for(cont = 0; cont < 6; cont++){
        if(aux%2 != 0){
            printf("%d\n", aux);
            aux = aux + 2;
        }
    }
 
    return 0;
}
