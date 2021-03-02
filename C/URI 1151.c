#include <stdio.h>
 
int main(){
    int input, x, sequencia[46];
    
    scanf("%d", &input);
    
    if(input < 46){
        for(x=0; x < input; x++){
            if(x == 0){
                sequencia[x] = 0;
            }
            else if(x == 1){
                sequencia[x] = 1;
            }
            else{
                sequencia[x] = sequencia[x-2] + sequencia[x-1];
            }
        }
    }
    
    for(x = 0; x < input; x++){
        printf("%d", sequencia[x]);
        if(x != input-1){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }
 
    return 0;
}