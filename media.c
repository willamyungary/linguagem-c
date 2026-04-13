#include <stdio.h>

int main() {

    // Declaração de variáveis
        float nota1, nota2, nota3, nota4, media;

    // Lendo as notas inseridas pelo usuário
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        printf("Digite a quarta nota: ");
        scanf("%f", &nota4);

    // Calculando a média das notas
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Exibindo o resultado da média
        printf("A média das notas é: %.2f\n", media);

    // Verificando a situação do aluno com base na média
        if (media >= 7.0) {
            printf("Aprovado!\n");
        } else if (media >= 5.0) {
            printf("Recuperação!\n");
        } else {
            printf("Reprovado!\n");
        }

    return 0;
}