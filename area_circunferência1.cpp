//Calcule a área de uma circunferência
//Utilize potência para desenvolver o algoritmo

#include<stdio.h>
#include<math.h> //BIBLIOTECA MATEMÁTICA

int main() {
	double area, raio;
	printf("Insira um valor para o raio: ");
	scanf("%lf", &raio);
		area = pow(raio,2) * 3.1415;
		printf("O valor da area = %.2lf", area);
	}
