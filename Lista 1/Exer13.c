#include <stdio.h>

int main() {
    float valorkg = 20.0, gramas;
    
    printf("Digite o peso do prato em gramas: ");
    scanf("%f", &gramas);
    printf("Preço a pagar pelo prato: R$%.2f\n", (gramas/1000)*valorkg);

    return 0;
}
