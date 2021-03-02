#include <stdio.h>

int main(){
    int a, b, x;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a>b){
       for(x=b+1; x < a; x++){
           if(x%5 == 2 || x%5 == 3){
               printf("%d\n", x);
           }
       } 
    }
    else{
        for(x=a+1; x < b; x++){
           if(x%5 == 2 || x%5 == 3){
               printf("%d\n", x);
           }
       } 
    }

    return 0;
}
