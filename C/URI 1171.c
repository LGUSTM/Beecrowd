#include <stdio.h>

int main(){
    int QtdeLeitura, aux, comp, i, j, x, y, cont;
    scanf("%i", &QtdeLeitura);
    int Matriz[QtdeLeitura];

    for(j=0; j<QtdeLeitura; j++){
        scanf("%i", &Matriz[j]);
    }

    for(x=0; x<QtdeLeitura; x++){
        for(y = x; y < QtdeLeitura; y++){
            if(Matriz[x] > Matriz [y]){
                aux = Matriz [x];
                Matriz[x] = Matriz[y];
                Matriz[y] = aux;
            }
        }
    }

    comp = Matriz[0];
    i = 1;
    cont = 1;
    while(1){
             if(i == QtdeLeitura+1) 
                break;
             if(Matriz[i] == comp){
                       cont++;
                       i++;
             }else{
                   printf("%d aparece %d vez(es)\n", comp, cont);
                   comp = Matriz[i];
                   cont = 0;
             }
    }
    return 0;
}