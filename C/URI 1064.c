#include <stdio.h>
 
int main() {
    double in1, in2, in3, in4, in5, in6, inp1 = 0, inp2 = 0, inp3 = 0, inp4 =0, inp5 = 0, inp6 = 0, average;
    int positivo = 0;
    
    scanf("%lf", &in1);
    scanf("%lf", &in2);
    scanf("%lf", &in3);
    scanf("%lf", &in4);
    scanf("%lf", &in5);
    scanf("%lf", &in6);
    
    if(in1 > 0){
        positivo = positivo + 1;
        inp1 = in1;
    }
    if(in2 > 0){
        positivo = positivo + 1;
        inp2 = in2;
    }
    if(in3 > 0){
        positivo = positivo + 1;
        inp3 = in3;
    }
    if(in4 > 0){
        positivo = positivo + 1;
        inp4 = in4;
    }
    if(in5 > 0){
        positivo = positivo + 1;
        inp5 = in5;
    }
    if(in6 > 0){
        positivo = positivo + 1;
        inp6 = in6;
    }
    average = (inp1 + inp2 + inp3 + inp4 + inp5 + inp6) / positivo; 
    
    printf("%i valores positivos\n", positivo);
    printf("%.1f\n", average);
 
    return 0;
}