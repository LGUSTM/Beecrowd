#include <stdio.h>

int main(){
    int input, x, y=1;
    
    scanf("%d", &input);
    
    for(x = 0; x < input; x++){
        printf("%d %d %d PUM\n", y, y+1, y+2);
        y = y + 4;
    }

    return 0;
}
