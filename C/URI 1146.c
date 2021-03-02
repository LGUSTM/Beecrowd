#include <stdio.h>
 
int main() {
    int input, x;
    
    while(1){
        scanf("%d", &input);
        if(input == 0){
            break;
        }
        for(x=1; x <= input; x++){
            printf("%d", x);
            if(x == input){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
 
    return 0;
}