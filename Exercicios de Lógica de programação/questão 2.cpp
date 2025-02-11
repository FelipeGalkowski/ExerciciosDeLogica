#include <iostream>
using namespace std;
int main()
{
    int popA = 5000000, popB = 7000000, ano;
    
    for(ano = 0; popA < popB; ano++ ){
        popA = popA + popA * 0.03;
        popB = popB + popB * 0.02;
    }
    
    cout << "O país A ultrapassa o número de habitantes do país B em " << ano << " anos, com o país A com " << popA << " habitantes e país B, com " << popB << " habitantes" << endl;
    
    return 0;
}

