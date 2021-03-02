#include <stdio.h>
 
int main() {
    int input, x, fatorial=1;
    
    scanf("%d", &input);
    
    for(x=2; x <= input; x++){
        fatorial = fatorial * x;
    }
    
    printf("%d\n", fatorial);
 
    return 0;
}