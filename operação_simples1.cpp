//Opera��o simples
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
	printf("Divis�o: %.3lf\n", result);
	result = a - b;
	printf("Subtra��o: %.3lf\n", result);
	result = a * b;
	printf("Multiplica��o: %.3lf\n", result);


}
