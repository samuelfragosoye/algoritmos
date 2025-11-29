#include <iostream>

using namespace std;

int main() {
    int p, d, b;
    
    // Entrada de dados usando cin
    cin >> p >> d >> b;

    // Processamento da lógica
    int pontuacao = p * 1 + d * 2 + b * 3;

    // Estrutura de seleção
    if (pontuacao >= 150) {
        cout << "B" << endl;
    } else if (pontuacao >= 120) {
        cout << "D" << endl;
    } else if (pontuacao >= 100) {
        cout << "P" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}