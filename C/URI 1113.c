#include <stdio.h>

int main()
{
    int a , b, x = 0;
    
    scanf("%d %d", &a, &b);
    
    do{
        if(a>b){
            printf("Decrescente\n");
        }
        else if(a < b){
            printf("Crescente\n");
        }
        scanf("%d %d", &a, &b);
    }while(a !=  b);

    return 0;
}
