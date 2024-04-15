#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand (time(NULL));
    int portaPremiada = rand() % 3 + 1;
    int portaEscolhida;
    int portaVazia;

    printf("Bem vindo ao jogo de Monty Hall!\n");
    printf("Escolha uma porta: (1, 2 ou 3)");
    fflush(stdout);
    scanf("%d", portaEscolhida);
do {
    portaVazia = rand() % 3 + 1;
} while (portaVazia == portaEscolhida || portaVazia == portaPremiada);

printf("O apresentador abriu a porta %d que está vazia!", portaVazia);
printf("Você vai querer trocar a sua porta? (s/n)");

char opcao;
fflush(stdout);
scanf(" %c", &opcao);
fflush(stdin);

if (opcao == "s") {
	do {
		portaEscolhida = rand() % 3 + 1;
	} while (portaVazia == portaEscolhida || portaEscolhida == portaEscolhida);
	printf("Você trocou para a porta %d. \n", portaEscolhida);
}

if (portaEscolhida == portaPremiada) {
	printf("Parabéns,você venceu o jogo!");
}
else {
	printf("Que pena, você perdeu!");
}
    return 0;
}
