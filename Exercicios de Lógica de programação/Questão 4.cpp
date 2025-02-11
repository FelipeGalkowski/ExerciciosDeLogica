/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int somaDosDigitos(int n) {
    int soma = 0;
    while (n != 0) {
        soma += n % 10; // Adiciona o último dígito à soma
        n /= 10;        // Remove o último dígito do número
    }
    return soma;
}

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    // Considerando números negativos
    int soma = somaDosDigitos(abs(n));
    
    cout << "A soma dos digitos de " << n << " é " << soma << endl;

    return 0;
}
