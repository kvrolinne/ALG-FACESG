#include <stdio.h>

int main() {
    int dia, mes, dataAtual;

    printf("Digite o dia do mês: ");
    scanf("%d", &dia);
    printf("Digite o número correspondente ao mês de hoje: ");
    scanf("%d", &mes);
    
    dataAtual = ((mes-1)*30) + dia;
    
    printf("Já se passaram %d dias desde o começo do ano\n", dataAtual);

}
