#include <stdio.h>

int main(){
    int x, z, y, soma = 1, excesso = 0;
    
    scanf("%d", &x);
    scanf("%d", &z);
    
    while(z<=x){
        scanf("%d", &z);
    }
    for(y = x; y < z; y++){
        if(soma >= z){
            break;
        }
        soma += y;
        excesso += 1;
    }
    printf("%d\n",excesso);
    
    return 0;
}