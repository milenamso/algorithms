//Calcule a área de uma circunferência
//Utilize potência e constante para desenvolver o algoritmo

#include<stdio.h>
#include<math.h>
 
#define PI 3.14159 //constante que possui valor fixo, são declaradas com letras maiusculas

int main() {
	double area, raio;
	printf("Insira um valor para o raio: ");
	scanf("%lf", &raio);
	//	area = pow(raio,2) * 3.1415;
		area = pow(raio,2) * PI; //substitui pela variável
		printf("O valor da area = %.2lf", area);
	}
