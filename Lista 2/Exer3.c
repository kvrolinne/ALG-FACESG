#include <stdio.h>

/* Escreva um programa que leia o código de origem de um produto e imprima na tela a
região de sua procedência conforme a tabela abaixo:
• código 1 : Sul
• código 2 : Sudeste
• código 3 : Centro-Oeste
• código 4 : Nordeste
• código 5: Norte
• Observação: Caso o código não seja nenhum dos especificados o produto deve ser
encarado como Importado*/

int main() {
    int cod;
    
    printf("Digite um código de produto: ");
    scanf("%d", &cod);
    
    switch(cod) {
        case 1:
        printf("Este produto veio do Sul.");
        break;
        case 2:
        printf("Este produto veio do Sudeste.");
        break;
        case 3:
        printf("Este produto veio do Centro-Oeste.");
        break;
        case 4:
        printf("Este produto veio do Nordeste.");
        break;
        case 5:
        printf("Este produto veio do Norte.");
        break;
        default:
        printf("Este produto é importado.");    
    }

    return 0;
}
