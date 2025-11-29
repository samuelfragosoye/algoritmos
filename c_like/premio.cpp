#include <iostream>

using namespace std;

int main() {
    int p, d, b, pontuacao;
    char continuar;

    // ESTRUTURA DE REPETIÇÃO
    // Permite rodar o programa várias vezes sem fechar
    do {
        cout << "\n--- Calculo de Pontuacao OBI ---" << endl;

        // ENTRADA DE DADOS
        cout << "Digite paes, doces e bolos: ";
        cin >> p >> d >> b;

        // PROCESSAMENTO DA LÓGICA
        pontuacao = p * 1 + d * 2 + b * 3;

        // ESTRUTURA DE SELEÇÃO
        // Verifica qual prêmio foi atingido
        if (pontuacao >= 150) {
            cout << "Saida: B" << endl;
        } else if (pontuacao >= 120) {
            cout << "Saida: D" << endl;
        } else if (pontuacao >= 100) {
            cout << "Saida: P" << endl;
        } else {
            cout << "Saida: N" << endl;
        }

        // Controle da repetição
        cout << "Continuar? (S/N): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    return 0;
}