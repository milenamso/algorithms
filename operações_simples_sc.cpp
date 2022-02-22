//Algortimo com menu para wue o usuario escolha quais operações ele quer fazer

#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
	int opcao;
	int n1, n2, result; //quando faço aqui vai valer para todos os cases
	printf("Selecione sua opcao: \n");
	printf("1. Soma\n2. Produto\n3. Area do Circulo\n4. Baskara\n5");
	scanf("%d", &opcao);
	printf("Deposite aqui seu valor inteiro: ");
	scanf("%d", &n1);
	printf("Deposite aqui seu valor inteiro: ");
	scanf("%d", &n2);
	switch(opcao){ //posso declarar variaveis no case
	case 1:
		result = n1 + n2;
		printf("%d", result);
	break;
	case 2:
		result = n1 * n2; 
		printf("%d", result);
	break;
	case 3:
		double raio;
		printf("Insira um valor para o raio: ");
		scanf("%lf", &raio);
		printf("O valor da area = %.2lf", pow(raio,2) * PI);
	break;
	case 4:
		double num1, num2, num3, delta;
		printf("Insira um valor para a: ");
		scanf("%lf", &num1);
		printf("Insira um valor para b: ");
		scanf("%lf", &num2);
		printf("Insira um valor para c: ");
		scanf("%lf", &num3);
		delta = pow(num2,2) - 4 * num1 * num3;
		if (num1 == 0 && delta < 0 )
			printf("Impossível calcular\n");
		else{
		
				printf("X1 =  %.5lf\n", F);
				printf("X2 =  %.5lf\n", G); 
		}
	break;
	default: printf("invalido");
	}
}

//
