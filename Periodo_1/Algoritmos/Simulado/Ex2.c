#include <stdio.h>

int totalMoedas(int qtdDias, int qtdMoedas){
    printf("Quantidade total de moedas economizadas em %d dia(s): %d", qtdDias, qtdDias * qtdMoedas);
}

int main()
{
    int qtdMoedas, qtdDias;
    
    printf("Por quantos dia você economizou moedas? \n-> ");
    scanf("%d", &qtdDias);

    printf("Digite quantas moedas foram economizadas em cada dia: \n-> ");
    scanf("%d", &qtdMoedas);
    
    totalMoedas(qtdDias, qtdMoedas);
    
    return 0;
}
