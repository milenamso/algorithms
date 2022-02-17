// Calcule a média ponderada correspondente a nota de dois alunos
// Utilize nota A e nota B como pontos flutuantes de precisão dupla
// Utilize apenas duas variáveis

#include <stdio.h>

int main(){
	double nota1, nota2;
	printf ("Digite sua primeira nota: ");
	scanf("%lf", &nota1);
	printf ("Digite sua segunda nota: ");
	scanf("%lf", &nota2);
		printf("media =  %.2lf", (nota1 * 3.5 + nota2 * 7.5)/11); //ordem de precedência
	}
