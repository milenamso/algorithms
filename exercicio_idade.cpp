//receber a idade, se tem de 0 a 10 anos - criança
// 11 a 18 anos - adolescente 
// 19 a 60 - adulto 
// 61 a 100 anos - idoso
// 101 - 150 anos - zumbi
//nenhuma opção - idade invalida

#include <stdio.h>

int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if (idade <= 10)
		printf("Você é criança\n");
		else if (idade > 10 && idade < 19)
			printf("Você é adolescente\n");
			else if (idade > 18 && idade <= 60)
				printf("Você é adulto\n");
				else if (idade >= 61 && idade <= 100)
					printf("Você é idoso\n");
					else if (idade >= 101 && idade <= 150)
						printf("Você é um zumbi\n");
						else printf("A sua idade é inválida\n");
					
}
