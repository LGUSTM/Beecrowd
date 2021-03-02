#include <stdio.h>

int main() {
    double nota1, nota2, media;
    
    scanf("%lf", &nota1);
    while(1){
        if(nota1 < 0 || nota1 > 10){
            printf("nota invalida\n");
            scanf("%lf", &nota1);
        }
        else{
            break;
        }
    }
    scanf("%lf", &nota2);
    while(1){
        if(nota2 < 0 || nota2 > 10){
            printf("nota invalida\n");
            scanf("%lf", &nota2);
        }
        else{
            break;
        }
    }
    
    media = (nota1 + nota2) / 2;
    printf("media = %.2f\n", media);
    
    return 0;
}