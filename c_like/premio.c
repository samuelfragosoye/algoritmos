#include <stdio.h>
#include <ctype.h> // Biblioteca para usar a função toupper

int main() {
    // Declaração das variáveis
    int p, d, b;
    int pontuacao;
    char continuar;

    // INICIO DA REPETIÇÃO (Do-While)
    // O código será executado pelo menos uma vez
    do {
        printf("\n--- Novo Calculo ---\n");

        // ENTRADA DE DADOS
        printf("Digite a quantidade de paes, doces e bolos (separados por espaco): ");
        scanf("%d %d %d", &p, &d, &b);

        // PROCESSAMENTO
        // Calcula a soma total ponderada
        pontuacao = (p * 1) + (d * 2) + (b * 3);

        // SELEÇÃO (Estrutura condicional para decidir o prêmio)
        if (pontuacao >= 150) {
            printf("Saida: B (Bolo)\n");
        } else if (pontuacao >= 120) {
            printf("Saida: D (Doce)\n");
        } else if (pontuacao >= 100) {
            printf("Saida: P (Pao)\n");
        } else {
            printf("Saida: N (Sem premio)\n");
        }

        // Pergunta se o usuário quer repetir o processo
        printf("Deseja calcular novamente? (S/N): ");
        scanf(" %c", &continuar); // O espaço antes de %c limpa o buffer do teclado

    } while (toupper(continuar) == 'S'); 
    // FIM DA REPETIÇÃO: Se digitar 'S', volta ao início.

    return 0;
}