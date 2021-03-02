#include <stdio.h>

int main() {
    double nota1, nota2, media;
    int calc;
    
    do{
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
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &calc);
        while(1){
            if(calc < 1 || calc > 2){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &calc);
            }
            else{
                break;
            }
        }
        if(calc == 2){
            break;
        }
    }while(1);
    
    return 0;
}