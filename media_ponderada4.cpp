/*Leia tr�s valores (vari�veis A, B e C), que s�o as notas dos tr�s alunos.
Em seguida, calcule a m�dia, considerando que a nota A tem peso 2, 
a nota B tem peso 3 e a nota C tem peso 5. 
*/
#include<stdio.h>
#include<math.h>

#define X (2 * a + 3 * b + 5 * c) /10

int main(){
	float a, b, c;
	printf("Insira a primeira nota: ");
	scanf("%f", &a);
	printf("Insira a segunda nota: ");
	scanf("%f", &b);
	printf("Insira a terceira nota: ");
	scanf("%f", &c);
		printf("O valor da media = %.2f", X);
}
