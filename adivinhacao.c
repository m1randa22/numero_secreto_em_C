#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{
	printf("**********************************\n");
	printf("Bem vindo ao Jogo de Adivinhação! \n");
	printf("**********************************\n");

	int numerosecreto = 42;

	int chute;

	for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
	{

		printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		printf("Qual o seu chute? \n");

		scanf("%d", &chute);
		printf("Número escolhido: %d\n", chute);

		if(chute < 0) {
			printf("Você não pode chutar números negativos\n");
			i--;

			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = (chute > numerosecreto);
		int menor = (chute < numerosecreto);

		if (acertou)
		{
			printf("Você acertou!\n");
			printf("Jogue de novo, você é um bom jogador!");

			break;
		}
		else if (maior)
		{
			printf("Seu chute foi MAIOR que o número secreto\n");
		}
		else
		{
			printf("Seu chute foi MENOR que o número secreto\n");
		}
	}
	printf("Fim de jogo. \n");
}