#include <stdio.h>
#include <math.h>
 
int main() {
    int  x, y;
    float i = 0, j = 0;
    
    for(x=0; x < 11; x++){
        for(y=0; y < 3; y++){
            j = j + 1;
            if((j - (int)floor(j)) == 0 || (i - (int)floor(i)) == 0){
                printf("I=%.0f J=%.0f\n", i, j);
            }
            else{
                if((int)i == 2){
                    printf("I=%.0f J=%.0f\n", i, j);
                }
                else{
                    printf("I=%.1f J=%.1f\n", i, j);
                }
            }
        }
        j = j - 3;
        j = j + 0.2;
        i = i + 0.2;
    }
 
    return 0;
}