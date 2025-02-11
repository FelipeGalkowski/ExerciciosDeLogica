/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int ehNumeroPerfeito(int n) {
    if (n <= 1) return 0; // Números menores ou iguais a 1 não são considerados perfeitos

    int soma = 0;

    // Encontrar divisores próprios de n
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            soma += i;
        }
    }

    // Verificar se a soma dos divisores próprios é igual ao número
    if (soma == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (ehNumeroPerfeito(numero) == 1) {
        cout << numero << " é um numero perfeito." << endl;
    } else {
        cout << numero << " não é um numero perfeito." << endl;
    }

    return 0;
}



