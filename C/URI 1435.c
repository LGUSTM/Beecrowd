#include <stdio.h>

int main(){
    int n, i, j, cont, aux, mat[100][100];

    while(1){
        scanf("%i", &n);
        if(n == 0){
            break;
        }
        else{
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    mat[i][j] = 0;
                }
            }
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    mat[i][j] = mat[i][j] + 1;
                }
            }
            aux = n;
            cont = 1;
            while(1){
                aux = aux - 2;
                if(aux > 0){
                    for(i = cont; i < n-cont; i++){
                        for(j = cont; j < n-cont; j++){
                            mat[i][j] = mat[i][j] + 1;
                        }
                    }
                    cont ++;
                }
                else{
                    break;
                }
            }
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    if(n > 18){
                        if(mat[i][j] > 9){
                            printf(" %i", mat[i][j]);
                        }
                        else{
                            if(j == 0){
                                printf("  %i", mat[i][j]);
                            }
                            else{
                                printf("   %i", mat[i][j]);
                            }
                        }
                    }
                    else{
                        if(j == 0){
                                printf("  %i", mat[i][j]);
                            }
                        else{
                            printf("   %i", mat[i][j]);
                        }
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}