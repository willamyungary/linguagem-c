#include <stdio.h>

int main() {
	// declarando as variaveis para armazenar os números inseridos pelo usuário e a soma
	int num1, num2, num3, soma;

	// lendo três números inseridos pelo usuário
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);

	printf("Digite o segundo número: ");
	scanf("%d", &num2);

	printf("Digite o terceiro número: ");
	scanf("%d", &num3);

	// Calculando a soma dos números inseridos pelo usuário
	soma = num1 + num2 + num3;

	// Exibindo o resultado da soma
	printf("A soma de %d, %d e %d é: %d\n", num1, num2, num3, soma);

return 0;

}
