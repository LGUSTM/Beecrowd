#include <stdio.h>
#include <math.h>

int primo(int x){
    int i, root;
    
    if(x<2){
        return 0;
    }
    if(x==2){
        return 1;
    }
    if(x%2==0){
        return 0;
    }
    root=sqrt(x);
    for(i=3; i<=root; i=i+2) {
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a, z, input, x;
    
    scanf("%d", &a);
    
    if(a >= 1 && a <= 100){
        for(z = 0; z < a; z++){
            scanf("%d", &input);
            if(input >= 1 && input <= 10000000){
                if(primo(input) == 1){
                    printf("%d eh primo\n", input);
                }
                else{
                    printf("%d nao eh primo\n", input);
                }
            }
        }
    }

    return 0;
}
