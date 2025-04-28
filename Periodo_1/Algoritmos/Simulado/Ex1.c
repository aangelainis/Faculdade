#include <stdio.h>

int main()
{
    int dado1, dado2, tempo;
    char nome[20];
    
    printf("Digite seu nome: \n-> ");
    scanf("%s", nome);
    printf("Digite o valor do 1º dado: \n-> ");
    scanf("%d", &dado1);
    printf("Digite o valor do 2º dado: \n-> ");
    scanf("%d", &dado2);
    printf("Digite o tempo de resposta em segundos: \n-> ");
    scanf("%d", &tempo);
    
    if ((dado1 + dado2) == 10 && tempo < 5){
        printf("Bônus concedido!");
    }
    else{
        printf("Sem bônus dessa vez.");
    }
    
    return 0;
}
