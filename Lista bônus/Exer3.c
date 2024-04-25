#include <stdio.h>
 
/* Faça um programa que leia um número do teclado 
(limite), um incremento (incr) e imprima os números
naturais de 0 até limite pulando de incr. Suponha que
limite e incr são maiores que zero.
Exemplo:
valores lidos: 10 (limite) 3 (incr)
impressão: 0 3 6 9 */

int main(){
    int limite, incr;
    
    printf("Informe o limite: ");
    scanf("%d", &limite);
    printf("Informe o incremento: ");
    scanf("%d", &incr);
    
   if (limite > 0 && incr > 0){
    for(int i=0; i <= limite; i +=incr){
             printf("%d ", i);
    }
   }
       
  return 0;
}
