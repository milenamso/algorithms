#include<stdio.h>
#include<math.h>

int main() {
	double num1, num2, num3, delta;
	printf("Insira um valor para a: ");
	scanf("%lf", &num1);
	printf("Insira um valor para b: ");
	scanf("%lf", &num2);
	printf("Insira um valor para c: ");
	scanf("%lf", &num3);
	delta = num2 * num2 - 4 * num1 * num3;
	if (num1 == 0 && delta < 0 )
		printf("Impossível calcular\n");
	else{
	
			printf("X1 = %.5lf\n", ((num2 * -1) + (num2 * num2)) / (2 * num1));
			printf("X2 = %.5lf\n", ((num2 * -1) - (num2 * num2)) / (2 * num1));
					}
}
