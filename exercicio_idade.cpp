//receber a idade, se tem de 0 a 10 anos - crian�a
// 11 a 18 anos - adolescente 
// 19 a 60 - adulto 
// 61 a 100 anos - idoso
// 101 - 150 anos - zumbi
//nenhuma op��o - idade invalida

#include <stdio.h>

int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade <= 10)
		printf("Voc� � crian�a\n");
		else if (idade > 10 && idade < 19)
			printf("Voc� � adolescente\n");
			else if (idade > 18 && idade <= 60)
				printf("Voc� � adulto\n");
				else if (idade >= 61 && idade <= 100)
					printf("Voc� � idoso\n");
					else if (idade >= 101 && idade <= 150)
						printf("Voc� � um zumbi\n");
						else printf("A sua idade � inv�lida\n");
					
}
