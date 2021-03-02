#include <stdio.h>
 
int main() {
    int num, x, y;
    float mat[10000][3], average;
    
    scanf("%d", &num);
    
    for(x = 0; x < num; x++){
        scanf("%f %f %f", &mat[x][0], &mat[x][1], &mat[x][2]);
    }
    
    for(x = 0; x < num; x++){
        for(y = 0; y < num; y++){
            if(y == 0){
                mat[x][y] = mat[x][y] * 2;
            }
            if(y == 1){
                mat[x][y] = mat[x][y] * 3;
            }
            if(y == 2){
                mat[x][y] = mat[x][y] * 5;
            }
        }
    }
    
    for(x = 0; x < num; x++){
        average = (mat[x][0] + mat[x][1] + mat[x][2]) / (2+3+5);
        printf("%.1f\n", average);
    }
 
    return 0;
}
