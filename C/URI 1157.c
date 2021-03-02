#include <stdio.h>

int main(){
    int input, x;
    
    scanf("%i", &input);
    
    for(x = 1; x <= input; x++){
        if(input % x == 0){
            printf("%d\n", x);
        }
    }
    
    return 0;
}