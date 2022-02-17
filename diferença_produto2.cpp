/*Read four integer values named A, B, C and D. 
Calculate and print the difference of product A and B by the product of C and D
(A * B - C * D).
*/

#include<stdio.h>
#include<math.h>

#define X a * b - c * d

int main() {
	int a, b, c, d;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	printf("Digite o quarto valor: ");
	scanf("%d", &d);
	printf("Resultado = %d", X);
	
}
