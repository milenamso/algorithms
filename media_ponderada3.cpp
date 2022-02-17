// Calcule a média ponderada correspondente a nota de dois alunos
// Utilize nota A e nota B como pontos flutuantes de precisão dupla

#include <stdio.h>

int main(){
	double nota1, nota2, media;
	printf ("Digite sua primeira nota: ");
	scanf("%lf", &nota1);
	printf ("Digite sua segunda nota: ");
	scanf("%lf", &nota2);
	media = (nota1 * 3.5 + nota2 * 7.5)/11;
		printf("Media =  %.2lf", media); //ordem de precedência
	}
