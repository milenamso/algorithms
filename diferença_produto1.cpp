/*Read four integer values named A, B, C and D. 
Calculate and print the difference of product A and B by the product of C and D
(A * B - C * D).
*/

#include<stdio.h>

int main(){
	int a, b, c, d;
	printf("Insira o primeiro valor: ");
	scanf("%d", &a);
	printf("Insira o segundo valor: ");
	scanf("%d", &b);
	printf("Insira o terceiro valor: ");
	scanf("%d", &c);
	printf("Insira o quarto valor: ");
	scanf("%d", &d);
	printf ("Diferença = \n%d", a * b - c * d);
}
