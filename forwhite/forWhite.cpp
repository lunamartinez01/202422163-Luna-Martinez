#include <iostream>

using namespace std;

int main() {
    
  int userNumber;
    cout << "ingrese un numero: " << endl;

  cin >> userNumber;
  for (int i = 1; i <= 10; i ++)
  {
    cout << "tabla de multiplicar: " << i << endl; 
    for(int j = 1; j <= 5; j++)
    {
      int result = i * j;
      cout << i << "*" << j << "=" << result << endl;

    }
    cout << "_________________" << endl;
  }

  return 0;
}
