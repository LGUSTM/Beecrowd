#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);
    
    while(1){
        if(a == 2002){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
        scanf("%d", &a);
    }

    return 0;
}
