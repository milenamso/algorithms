//Calcule a área de uma circunferência

#include<stdio.h>

int main() {
	double a, r;
	printf("Insira um valor para o raio: ");
	scanf("%lf", &r);
		a = r * r * 3.1415;
		printf("O valor da area = %.2lf", a);
}
