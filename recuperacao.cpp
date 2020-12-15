#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
  int nun1, nun2;
  vector <int> sequencia;
  
  cout << "Sistema de para informar o proximo numero\n\n";
  
  cout << "Digite o primeiro numero : ";
  cin >> nun1;
  nun2 = (nun1 + 1);
  
  while (nun2 > nun1) {
  cout << "Digite o proximo numero : ";
  cin >> nun2;
  sequencia.push_back (nun2);
  cout << "Qualquer numero maior que " << nun2 << "!: \n\n";
  }
  cout << "Ops, aconteceu algo de errado";

}
