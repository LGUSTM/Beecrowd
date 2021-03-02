#include <stdio.h>

int main(){   
    int x, cont;
    
    scanf("%d", &x);
    
    for(cont = 1; cont <= 10; cont++){
        printf("%d x %d = %d\n", cont, x, x*cont);
    }

    return 0;
}
