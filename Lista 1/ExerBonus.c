#include <stdio.h>
#include <string.h>

void limpar(){
    char c;
    while ((c = getchar()) != '\n'  && c != EOF) {}
}

int main(){
    int idade;
    float altura;
    char nome[50];
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu nome: ");
    limpar();
    fgets(nome, 50, stdin);
    strtok(nome, "\n");
    
    printf("O seu nome é %s, a sua idade é %d e sua altura é %.2f", nome, idade, altura);
    
    return 0;
}
