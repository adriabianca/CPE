//
//  item 3.cpp
//  item 3
//
//  Created by Adria on 08/04/24.
//
//  Palíndromo é um número ou texto que se lê da mesma maneira de trás para frente ou de frente para trás. Por exemplo, cada um dos dígitos a seguir é um palindrome: 12321, 55555, 45554 and 11611. Escreva um código que lê cinco dígitos inteiros e determina se é um palíndromo. (Dica: use a divisão e o operador módulo para separar o número em seus dígitos individuais)
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

   int valor (0);

   while ( !valor ) {

      cout << "Digite cinco números: ";
      cin >> valor;

      if ( valor < 10000 )
         valor = 0;
       
      if ( valor > 99999 )
         valor = 0;
   }

   if ( valor / 10000 == valor % 10 )
      if ( valor % 10000 / 1000 == valor % 100 / 10 )
          
         cout << "Palíndromo" << endl;

   return 0;
}
