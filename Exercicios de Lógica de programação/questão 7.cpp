#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, c, n;
    
    cout << "Quantos termos vamos calcular a sequência de fibonacci?: " << endl;
    cin >> n;
    
    
    for(int i=0; i<n; i++){
        
        c = a + b;
        a = b;
        b = c;

          cout << "O número de fibonacci para o número de termos digitados é: " << c << endl;
        
    }
    
    return 0;
}