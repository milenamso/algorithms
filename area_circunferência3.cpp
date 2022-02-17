//Calcule a área de uma circunferência
//Utilize potência e constante para desenvolver o algoritmo
//Utilize apenas um algoritmo

#include<stdio.h>
#include<math.h>
 
#define PI 3.14159 //constante que possui valor fixo, são declaradas com letras maiusculas

int main() {
	double raio;
	printf("Insira um valor para o raio: ");
	scanf("%lf", &raio);
		printf("O valor da area = %.2lf", pow(raio,2) * PI);
}

