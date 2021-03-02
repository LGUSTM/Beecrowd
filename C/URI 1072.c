#include <stdio.h>
 
int main() {
    int x, mat[10000], cont, in = 0, out = 0;
    
    scanf("%d", &x);
    
    for(cont = 0; cont < x; cont++){
        scanf("%d", &mat[cont]);
    }
    
    for(cont = 0; cont < x; cont++){
        if(mat[cont] >= 10 && mat[cont] <= 20){
            in = in + 1;
        }
        else{
            out = out + 1;
        }
    }
    
    printf("%d in\n", in);
    printf("%d out\n", out);
 
    return 0;
}
