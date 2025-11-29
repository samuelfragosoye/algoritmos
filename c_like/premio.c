#include <stdio.h>

int main() {
    // Declaração das variáveis para pães (p), doces (d) e bolos (b)
    int p, d, b;
    int pontuacao_total;

    // Leitura dos dados de entrada
    scanf("%d", &p);
    scanf("%d", &d);
    scanf("%d", &b);

    // Processamento: Cálculo da pontuação conforme regras
    // Pão = 1 pt, Doce = 2 pts, Bolo = 3 pts
    pontuacao_total = (p * 1) + (d * 2) + (b * 3);

    // Lógica de Seleção para determinar a saída
    if (pontuacao_total >= 150) {
        printf("B\n"); // Ganha Bolo
    } else if (pontuacao_total >= 120) {
        printf("D\n"); // Ganha Doce
    } else if (pontuacao_total >= 100) {
        printf("P\n"); // Ganha Pão
    } else {
        printf("N\n"); // Não ganha prêmio
    }

    return 0;
}