// Calcule a média ponderada correspondente a nota de dois alunos
// Utilize nota A e nota B como pontos flutuantes de precisão dupla

#include<stdio.h>
#include<math.h>

#define X (nota1 * 3.5 + nota2 * 7.5)/11

int main() {
	double nota1, nota2;
	printf("Digite a primeira nota: ");
	scanf("%lf", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%lf", &nota2);
	printf("Media = %.2lf\n", X);
}
