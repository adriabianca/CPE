//
//  main.cpp
//  item 2
//
//  Created by Adria on 15/04/24.
//
//Um número inteiro maior que 1 é considerado primo se for divisível por apenas 1 e ele próprio. Por exemplo, 2, 3, 5 e 7 são números primos, mas 4, 6, 8 e 9 não são.
//  a) Escreva uma função que determine se um número é primo.
//  b) Use esta função em um código que determina e imprime todos os números primos entre 2 e 1.000.
//  c) Inicialmente, você pode pensar que n / 2 é o limite superior para o qual você deve testar se um número é primo, mas você precisa ir apenas até a raiz quadrada de n. Reescreva o código e execute-o nas duas maneiras para mostrar que você obtém o mesmo resultado.

#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo( unsigned );

int main() {

   cout <<"Os números primos sao:\n" << endl;

   for ( unsigned num{ 2 }; num <= 1000; ++num )
      if ( eh_primo( num ) )
         cout << num << ' ';

            cout << endl;
        return 0;
    }

bool eh_primo( unsigned numero ) {

   for ( unsigned i{ 2 }; i <= sqrt( numero ); ++i )
      if ( !( numero % i ) )
         return false;

   return true;
}
