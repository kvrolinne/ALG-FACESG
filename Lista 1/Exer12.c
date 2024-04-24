#include <stdio.h>

int main() {
    int dia, mes, dias_passados;
    int dias_por_mes[12] = {31, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);

    dias_passados = dia;

    for (int i = 0; i < mes - 1; i++) {
        dias_passados += dias_por_mes[i];
    }

    printf("Desde o início do ano até a data informada passaram-se %d dias.\n", dias_passados);

    return 0;
}
