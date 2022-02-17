//Operação simples
#include<stdio.h>

int main(){
	double a, b, result;
	printf("Insira o primeiro numero: ");
	scanf("%lf", &a);
	printf("Insira outro numero: ");
	scanf("%lf", &b);
	result = a + b;
	printf("Soma: %.3lf\n", result);
	result = a / b;
	printf("Divisão: %.3lf\n", result);
	result = a - b;
	printf("Subtração: %.3lf\n", result);
	result = a * b;
	printf("Multiplicação: %.3lf\n", result);


}
