#include <stdio.h>
 
int main() {
    int i = 1, j = 8, x, y;
    
    for(x=0; x < 5; x++){
        for(y=0; y < 3; y++){
            j = j - 1;
            printf("I=%d J=%d\n", i, j);
        }
        i = i + 2;
        j = 8;
    }
 
    return 0;
}