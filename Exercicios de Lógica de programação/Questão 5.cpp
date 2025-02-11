/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

// Função para calcular a soma dos números primos no intervalo [a, b]
int somaPrimos(int a, int b) {
    int soma = 0;
    for (int i = a; i <= b; ++i) {
        if (ehPrimo(i)) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int a, b;
    cout << "Digite o intervalo [a, b]: ";
    cin >> a >> b;

    int soma = somaPrimos(a, b);
    
    cout << "A soma dos numeros primos no intervalo [" << a << ", " << b << "] é " << soma << endl;

    return 0;
}


