#include <iostream>
using namespace std;
int main()
{
  int n; double maiorSalario;
  while (n<=0){
  cout << "Digite o número de pessoas entrevistadas: ";
  cin >> n;
  }
  
  for (int i=0; i<n; i++){
  double salario;
  cout << "Digite o salário da pessoa ";
  cin >> salario;
  if(salario > maiorSalario){
      maiorSalario = salario;
  }
  }
  cout << "O maior salário entre os entrevistados é: " << maiorSalario << endl;
  
  return 0;
}
