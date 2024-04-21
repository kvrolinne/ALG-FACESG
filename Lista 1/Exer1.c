#include <stdio.h>

int main() {
    int num1, num2, multi;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    
    printf("Digite mais um número: ");
    scanf("%d", &num2);
    
    multi = num1 * num2;
    
    printf("A multiplicação dos números é: %d", multi);
    
    return 0;
}
