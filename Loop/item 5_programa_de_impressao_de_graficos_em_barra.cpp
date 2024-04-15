//
//  main.cpp
//  item 5
//
//  Created by Adria on 09/04/24.
//
// (Programa de impressão de gráficos de barras) Uma aplicação interessante dos computadores é exibir gráficos e tabelas de barras. Escreva um aplicativo que leia cinco números entre 1 e 30. Para cada número lido, seu programa deverá exibir o mesmo número de asteriscos adjacentes. Por exemplo, se o seu programa lê o número 7, ele deverá exibir ******* . Mostrar as barras de asteriscos depois de ler todos os cinco números
//

#include <iostream>

using namespace std;

int main() {

   cout << " Escolha cinco número entre 1 a 9: ";

   for ( int n{ 1 }; n <= 5; ++n ) {

      int numero;
      cin >> numero;

      if ( numero < 1 || 9 < numero ) {
         cout << "\nnumero " << numero << " longe do que consigo!\n";
         continue;
      }

      cout << endl;

      for ( int linha{ 1 }; linha <= 2; ++linha ) {
         for ( int pos{ 1 }; pos <= numero; ++pos )
          cout << '*';
         cout << endl;
      }
   }

   return 0;
}
