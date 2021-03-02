#include <stdio.h>

int main()
{   
    int x, cont;
    
    scanf("%d", &x);
    
    for(cont = 1; cont <= 10000; cont++){
        if(cont%x == 2){    
            printf("%d\n", cont);
        }
    }

    return 0;
}
