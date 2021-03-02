#include <stdio.h>

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    while(1){
        if(x > 0 && y > 0){
            printf("primeiro\n");
        }
        else if(x < 0 && y > 0){
            printf("segundo\n");
        }
        else if(x < 0 && y < 0){
            printf("terceiro\n");
        }
        else if(x > 0 && y < 0){
            printf("quarto\n");
        }
        scanf("%d %d", &x, &y);
        if(x == NULL || y == NULL){
            break;
        }
    }
    
    return 0;
}