#include <stdio.h>
 
int main() {
    int input, x, y=1;
    
    scanf("%d", &input);
    
    if(input > 1 && input < 1000){
        for(x=0; x < input; x++){
            printf("%d %d %d\n", y, y*y, (y*y)*y);
            y += 1;
        }
    }
 
    return 0;
}