//Operação simples
#include<stdio.h>

#include<stdio.h>

int main(){
	double a, b;
	printf("Insira o primeiro numero: ");
	scanf("%lf", &a);
	printf("Insira outro numero: ");
	scanf("%lf", &b);
	printf("Soma: %.3lf\n", a + b);
	printf("Subtração: %.3lf\n", a - b);
	printf("Multiplicação: %.3lf\n", a * b);
	printf("Divisão: %.3lf\n", a / b);
}
