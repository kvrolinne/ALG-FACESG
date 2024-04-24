#include <stdio.h>
#include <string.h>

void limpar(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main (){
    char nome1[50], nome2[50];
    int idade1, idade2;
    float altura1, altura2;

    printf("Informe os dados da primeira pessoa:\nInforme o seu nome: ");
    scanf(" %[^\n]s", nome1);
    printf("Digite a sua idade: ");
    scanf("%d", &idade1);
    printf("Digite a sua altura: ");
    scanf("%f", &altura1);
    limpar();
    printf("Informe os dados da segunda pessoa\nInforme o seu nome: ");
    scanf(" %[^\n]s", nome2);
    printf("Informe a sua idade: ");
    scanf("%d", &idade2);
    printf("Informe a sua altura: ");
    scanf("%f", &altura2);
    printf("\n\nOs dados da primeira pessoa são:\nO seu nome é %s, a sua idade é %d e sua altura é %.2fcm.\n\nOs dados da segunda pessoa são:\nO seu nome é %s, a sua idade é %d e sua altura é %.2fcm.\n", nome1, idade1, altura1, nome2, idade2, altura2);
    
    return 0;
}
