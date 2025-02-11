#include <iostream>
using namespace std;

char embaralharMoeda(char posicaoAtual, char movimento) {
    if (posicaoAtual == 'A' && movimento == '1') return 'B';
    if (posicaoAtual == 'B' && movimento == '1') return 'A';
    if (posicaoAtual == 'B' && movimento == '2') return 'C';
    if (posicaoAtual == 'C' && movimento == '2') return 'B';
    if (posicaoAtual == 'A' && movimento == '3') return 'C';
    if (posicaoAtual == 'C' && movimento == '3') return 'A';
    return posicaoAtual;
}

int main() {
    char posicaoInicial, posicaoFinal;
    char movimentos[50];
    int nMovimentos;

    cout << "Digite 1 para ser o embaralhador ou 2 para ser o adivinhador: ";
    cin >> nMovimentos;

    cout << "Digite a posição inicial da moeda (A, B ou C): ";
    cin >> posicaoInicial;
    posicaoFinal = posicaoInicial;

    cout << "Digite o número de movimentos: ";
    cin >> nMovimentos;

    cout << "Digite a sequência de movimentos (1 para A<->B, 2 para B<->C, 3 para A<->C): ";
    for (int i = 0; i < nMovimentos; i++) {
        cin >> movimentos[i];
    }

    for (int i = 0; i < nMovimentos; i++) {
        posicaoFinal = embaralharMoeda(posicaoFinal, movimentos[i]);
        cout << "Após o movimento " << movimentos[i] << ", a posição da moeda é: " << posicaoFinal << endl;
    }

    if (nMovimentos > 0) {
        char palpite;
        cout << "Digite o seu palpite para a posição final da moeda (A, B ou C): ";
        cin >> palpite;

        if (palpite == posicaoFinal) {
            cout << "Parabéns! Você acertou. A moeda está em " << posicaoFinal << "." << endl;
        } else {
            cout << "Você errou. A moeda está em " << posicaoFinal << "." << endl;
        }
    }

    return 0;
}