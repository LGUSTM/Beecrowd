#include <stdio.h>
 
int main() {
    int x = 0, cont;
    
    for(cont = 0; cont < 50; cont++){
        x = x + 2;
        printf("%d\n", x);
    }
    
    return 0;
}