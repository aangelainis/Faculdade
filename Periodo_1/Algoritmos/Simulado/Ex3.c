#include <stdio.h>

int main()
{
    float nota, soma, maiorNota, lista[4];
    int timeCampeao;
    for(int i = 0; i < 4; i++){
        printf("Notas do time %d:\n", i + 1);
        soma = 0;
        for(int k = 0; k < 3; k++){
            printf("Digite a nota do lutador %d: ", k + 1);
            scanf("%f", &nota);
            soma = soma + nota;
        }
        lista[i] = soma;
        
        printf("\n");
    }
        
    for(int m = 0; m < 4; m++){
        printf("Média do time %d: %.2f\n", m + 1, lista[m]/3);
        if ((lista[m]/3) > maiorNota){
            maiorNota = lista[m]/3;
            timeCampeao = m+1;
        }
    }
    

    printf("O grande campeão é o Time %d com média %.2f!", timeCampeao, maiorNota);
    
    return 0;
}
