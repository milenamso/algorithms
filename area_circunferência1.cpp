//Calcule a �rea de uma circunfer�ncia
//Utilize pot�ncia para desenvolver o algoritmo

#include<stdio.h>
#include<math.h> //BIBLIOTECA MATEM�TICA

int main() {
	double area, raio;
	printf("Insira um valor para o raio: ");
	scanf("%lf", &raio);
		area = pow(raio,2) * 3.1415;
		printf("O valor da area = %.2lf", area);
	}
