#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char NumErro, ValContrato[1000];
    int Tamanho, i, j;

    scanf("%c", &NumErro);
    scanf("%s", ValContrato);

    while (NumErro != '0'){
        Tamanho = strlen(ValContrato);
        for (i = 0; i < Tamanho; i++){
        if (ValContrato[i] == NumErro){
            for (j = i; j < Tamanho; j++)
                ValContrato[j] = ValContrato[j+1];
            ValContrato[Tamanho-1] = 0;
            Tamanho--;
            i--;
        }
        }

        for (i = 0; i < Tamanho-1; i++){
        if (ValContrato[i] == '0'){
            for (j = i; j < Tamanho; j++)
                ValContrato[j] = ValContrato[j+1];
            ValContrato[Tamanho-1] = 0;
            Tamanho--;
            i--;
        }
        else
            break;
        }

        if (Tamanho == 0){
            ValContrato[0] = '0';
            ValContrato[1] = '\0';
        }

        printf("%s\n", ValContrato);

        scanf(" %c", &NumErro);
        scanf("%s", ValContrato);
    }
    return 0;
}