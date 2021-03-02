#include <stdio.h>
 
int main() {
    int x, mat[10000], cont;
    
    scanf("%d", &x);
    
    for(cont = 0; cont < x; cont++){
        scanf("%d", &mat[cont]);
    }
    
    for(cont = 0; cont < x; cont++){
        if(mat[cont] == 0){
            printf("NULL\n");
        }
        else{
            if(mat[cont]%2 == 0 && mat[cont] > 0){
                printf("EVEN POSITIVE\n");
            }
            else if(mat[cont]%2 == 0 && mat[cont] < 0){
                printf("EVEN NEGATIVE\n");
            }
            else if(mat[cont] > 0){
                printf("ODD POSITIVE\n");
            }
            else if(mat[cont] < 0){
                printf("ODD NEGATIVE\n");
            }
        }
    }
 
    return 0;
}
