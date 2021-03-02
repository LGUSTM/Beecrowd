#include <stdio.h>

int main() {
    int input, golinter, golgremio, inter = 0, gremio = 0, empate = 0, cont = 0;
    
    do{
        scanf("%d %d", &golinter, &golgremio);
        if(golinter > golgremio){
            inter = inter + 1;
        }
        else if(golgremio > golinter){
            gremio = gremio + 1;
        }
        else if(golinter == golgremio){
            empate = empate + 1;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &input);
        while(1){
            if(input < 1 || input > 2){
                printf("novo inputulo (1-sim 2-nao)\n");
                scanf("%d", &input);
            }
            else{
                break;
            }
        }
        if(input == 2){
            cont ++;
            break;
        }
        cont ++;
    }while(1);
    printf("%d grenais\n", cont);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if(inter > gremio){
        printf("Inter venceu mais\n");
    }
    else if(gremio > inter){
        printf("Gremio venceu mais\n");
    }
    else if(inter = gremio){
        printf("Não houve vencedor\n");
    }
    
    return 0;
}