#include <stdio.h>

/*
Exercício: Faça um programa em C para ler o peso e a idade do usuário e mostrar qual o risco de apresentar um problema cardíaco:
peso maior que 110 kg e idade acima de 38 anos: ALTO RISCO
peso menor que 110kg e idade acima de 38 anos: MÉDIO RISCO
peso maior que 110kg e idade abaixo ou igual a 38 anos: BAIXO RISCO
nenhuma das anteriores: BAIXíSSIMO RISCO.
*/

int main(){
    int idade;
    float peso;
    
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    printf("Informe o seu peso: ");
    scanf("%f", &peso);
    
    if (peso > 110.00 && idade > 30)
        printf("Alto risco de apresentar um problema cardíaco.");
    else if (peso < 110.00 && idade > 38)
        printf("Médio risco de apresentar um problema cardíaco.");
    else if (peso > 110.00 && idade <= 38)
        printf("Baixo risco de apresentar um problema cardíaco.");
    else
        printf("Baixíssimo risco de apresentar um problema cardíaco.");
    
    return 0;
}
