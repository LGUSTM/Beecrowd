#include <stdio.h>
 
int main() {
    int x, cont, aux;
    
    scanf("%d", &x);
    aux = 1;
    
    for(cont = 0; cont <= x; cont++){
        if(aux%2 == 0){
            aux = aux + 1;
        }
        else{
            printf("%d\n", aux);
            aux = aux + 1;
        }
    }
 
    return 0;
}
