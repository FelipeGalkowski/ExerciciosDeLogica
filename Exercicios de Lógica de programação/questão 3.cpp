#include <iostream>
using namespace std;
int main()
{
    int n100, n50, n20, n10, n5, n2, m1;
    float m050, m025, m010, m05, m001, valor;
    
    cout << "Qual o valor a ser calculado? " << endl;
    cin >> valor;
    
        while(valor >= 100){
            n100 = valor / 100;
            valor = valor - n100 * 100;
            
        }
        while(valor >= 50){
            n50 = valor / 50;
            valor = valor - n50 * 50;
            
        }
        while(valor >= 20){
            n20 = valor / 20;
            valor = valor - n20 * 20;
            
        }
        while(valor >= 10){
            n10 = valor / 10;
            valor = valor - n10 * 10;
            
        }
        while(valor >= 5){
            n5 = valor / 5;
            valor = valor - n5 * 5;
            
        }
        while(valor >= 2){
            n2 = valor / 2;
            valor = valor - n2 * 2;
            
        }
         while(valor >= 1){
            m1 = valor / 1;
            valor = valor - m1 * 1;
            
        }
        while(valor >= 0.50){
            m050 = 1;
            valor = valor - 0.5;
        }
        
        while(valor >= 0.25){
            m025 = 1;
            valor = valor - 0.25;
            
        }
        while(valor >= 0.10){
            m010 = 1;
            valor = valor - 0.10;
            
        }
        while(valor >= 0.05){
            m05 = 1;
            valor = valor - 0.05;
            
        }
        while(valor >= 0.01){
            m001 = 1;
            valor = valor - 0.01;
            
        }
        
       cout << "Seu dinheiro ficou distribuido em: " << endl << endl;
       cout << "=========NOTAS=========" << endl;
       cout << n100 << " Nota(s) de 100." << endl;
       cout << n50 << " Nota(s) de 50." << endl;
       cout << n20 << " Nota(s) de 20." << endl;
       cout << n10 << " Nota(s) de 10." << endl;
       cout << n5 << " Nota(s) de 5." << endl;
       cout << n2 << " Nota(s) de 2." << endl;
       cout << "=========MOEDAS=========" << endl;
       cout << m1 << " Moedas de 1." << endl;
       cout << m050 << " Moedas de 50 centavos." << endl;
       cout << m025 << " Moedas de 25 centavos." << endl;
       cout << m010 << " Moedas de 10 centavos." << endl;
       cout << m05 << " Moedas de 5 centavos." << endl;
       cout << m001 << " Moedas de 1 centavo." << endl;
    return 0; 
}