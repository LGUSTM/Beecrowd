#include <stdio.h>
 
int main() {
    int input[1000], x=0, y, soma=0;
    float media;
    
    while(1){
        scanf("%d", &input[x]);
        if(input[x]<0){
            break;
        }
        x++;
    }
    
    for(y=0; y < x; y++){
        soma += input[y];
    }
    media = (float)soma / x;
    
    printf("%.2f\n", media);
 
    return 0;
}