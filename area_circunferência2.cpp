//Calcule a �rea de uma circunfer�ncia
//Utilize pot�ncia e constante para desenvolver o algoritmo

#include<stdio.h>
#include<math.h>
 
#define PI 3.14159 //constante que possui valor fixo, s�o declaradas com letras maiusculas

int main() {
	double area, raio;
	printf("Insira um valor para o raio: ");
	scanf("%lf", &raio);
	//	area = pow(raio,2) * 3.1415;
		area = pow(raio,2) * PI; //substitui pela vari�vel
		printf("O valor da area = %.2lf", area);
	}
