#include <stdio.h>

int main() {
    double nota1, nota2, nota3, nota4, notaexame, media, mediafinal;
    
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);
    
    media = (nota1*2 + nota2*3 + nota3*4 + nota4) / 10;
    printf("Media: %.1f\n", media);
    if(media > 7){
        printf("Aluno aprovado.\n");
    }
    else{
        if(media < 5){
            printf("Aluno reprovado.\n");
        }
        else{
            printf("Aluno em exame.\n");
            scanf("%lf", &notaexame);
            printf("Nota do exame: %.1f\n", notaexame);
            mediafinal = (media + notaexame) / 2;
            if(mediafinal >= 5){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", mediafinal);
            }
            else{
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", mediafinal);
            }
        }
    }
    
    return 0;
}
