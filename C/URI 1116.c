#include <stdio.h>

int main() {
    int input, x, y, cont; 
    double result;
    
    scanf("%d", &input);
    
    for(cont = 0; cont < input; cont++){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else if(x == 0){
            printf("0.0\n");
        }
        else{
            result = (float)x / y;
            printf("%.1f\n", result);
        }
    }
    
    return 0;
}