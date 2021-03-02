#include <stdio.h>

int main(){
    int a, b, x, soma = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a>b){
       for(x=b; x <= a; x++){
           if(x%13 != 0){
               soma = soma + x;
           }
       } 
    }
    else{
        for(x=a; x <= b; x++){
           if(x%13 != 0){
               soma = soma + x;
           }
       } 
    }
    
    printf("%d\n", soma);

    return 0;
}
