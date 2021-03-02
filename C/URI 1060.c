#include <stdio.h>
 
int main() {
    double in1, in2, in3, in4, in5, in6;
    int positivo = 0;
    
    scanf("%lf", &in1);
    scanf("%lf", &in2);
    scanf("%lf", &in3);
    scanf("%lf", &in4);
    scanf("%lf", &in5);
    scanf("%lf", &in6);
    
    if(in1 > 0){
        positivo = positivo + 1;
    }
    if(in2 > 0){
        positivo = positivo + 1;
    }
    if(in3 > 0){
        positivo = positivo + 1;
    }
    if(in4 > 0){
        positivo = positivo + 1;
    }
    if(in5 > 0){
        positivo = positivo + 1;
    }
    if(in6 > 0){
        positivo = positivo + 1;
    }
    printf("%i valores positivos\n", positivo);
 
    return 0;
}