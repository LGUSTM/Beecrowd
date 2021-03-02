#include <stdio.h>
 
int main() {
    int a, b, c, d, e, pares = 0, impares = 0, positivo = 0, negativo = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
   
    if(a%2 == 0){
        pares = pares + 1; 
    }
    else{
        impares = impares + 1;
    }
    if(b%2 == 0){
        pares = pares + 1; 
    }
    else{
        impares = impares + 1;
    }
    if(c%2 == 0){
        pares = pares + 1; 
    }
    else{
        impares = impares + 1;
    }
    if(d%2 == 0){
        pares = pares + 1; 
    }
    else{
        impares = impares + 1;
    }
    if(e%2 == 0){
        pares = pares + 1; 
    }
    else{
        impares = impares + 1;
    }
    if(a > 0){
        positivo = positivo + 1; 
    }
    else if(a < 0){
        negativo = negativo + 1;
    }
    if(b > 0){
        positivo = positivo + 1; 
    }
    else if(b < 0){
        negativo = negativo + 1;
    }
    if(c > 0){
        positivo = positivo + 1; 
    }
    else if(c < 0){
        negativo = negativo + 1;
    }
    if(d > 0){
        positivo = positivo + 1; 
    }
    else if(d < 0){
        negativo = negativo + 1;
    }
    if(e > 0){
        positivo = positivo + 1; 
    }
    else if(e < 0){
        negativo = negativo + 1;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
 
    return 0;
}
