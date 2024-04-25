#include <stdio.h>

/* Exercício: Uma equipe de vôlei paga aos seus jogadores, além do salário, um valor adicional ao
salário mensal que é função da produtividade de cada um. Essa produtividade é paga de
acordo com uma tabela. Faça um programa que, dados o salário e o código da classe de um jogador, calcule e
imprima o seu salário final e o nome da sua classe (nível).*/

int main (){
    float salario;
    int cod;

  printf ("Informe o seu salário: ");
  scanf ("%f", &salario);
  printf ("Informe a sua classe: ");
  scanf ("%d", &cod);

  switch (cod) {
	case 1:
	 printf("Sua classe é excelente! O seu salário será: R$%.2f", salario*2); 
	 break;
	case 2:
	printf("Sua classe é boa! O seu salário será: R$%.2f", (salario) + salario*0.8);
	break;
	case 3:
	printf("Sua classe é média! O seu salário será: R$%.2f", (salario) + salario*0.5);
	break;
	case 4:
	printf("A sua classe é regular! O seu salário será: R$%.2f", (salario) + salario*0.3);
	break;
	case 5:
	printf("Você precisa treinar mais! O seu salário será: R$%.2f", (salario) + salario*0.1);
	break;
	case 6:
	printf("Te cuida! O seu salário será: R$%.2f", (salario) + salario*0.05);
	break;
	case 7:
	printf("Passe no departamento pessoal! O seu salário será: R$%.2f", salario);
	break;
	default:
	printf("Informe o código de classe corretamente.");
	break;
	
  }

  return 0;
}
