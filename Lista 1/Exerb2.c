#include <stdio.h>
#include <string.h>

void limpar() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF ) {}
}

int main(){
    int idade1, idade2;
    float altura1, altura2;
    char nome1[50], nome2[50];
    
    printf("Pessoa 1, digite a sua idade: ");
    scanf("%d", &idade1);
    printf("Agora, digite a sua altura: ");
    scanf("%f", &altura1);
    limpar();
    printf("Agora, digite o seu nome: ");
    scanf("%[^\n]s", nome1);
    printf("Pessoa 2, digite a sua idade: ");
    scanf("%d", &idade2);
    printf("Agora, digite a sua altura: ");
    scanf("%f", &altura2);
    limpar();
    printf("Agora, digite o seu nome: ");
    scanf("%[^\n]s", nome2);
    printf("Pessoa 1, o seu nome é %s, a sua idade é %d e sua altura é %.2f\nPessoa 2, o seu nome é %s, a sua idade é %d e sua altura é %.2f", nome1, idade1, altura1, nome2, idade2, altura2);
    
    return 0;
}
