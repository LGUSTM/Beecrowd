#include <stdio.h>
 
int main() {
    int a, b, x, y, aux = 1;
    
    scanf("%d %d", &a, &b);
    
    if(a > 1 && a < 20 && b > a && a < 100000){
        for(x=0; x < b/a; x++){
            for(y=0; y < a; y++){
                printf("%d", aux);
                aux++;
                if(y != (a-1)){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
 
    return 0;
}