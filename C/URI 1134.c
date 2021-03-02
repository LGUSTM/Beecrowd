#include <stdio.h>

int main(){
    int input, alcool = 0, gasolina = 0, diesel = 0;
    
    scanf("%d", &input);
    
    while(1){
        while(1){
            if(input > 4 || input < 1){
                scanf("%d", &input);
            }
            else{
                break;
            }
        }
        if(input == 4){
            break;
        }
        else if(input == 1){
            alcool += 1; 
        }
        else if(input == 2){
            gasolina += 1;
        }
        else if(input == 3){
            diesel += 1;
        }
        scanf("%d", &input);
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
