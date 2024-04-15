//
//  main.cpp
//  item 2
//
//  Created by Adria on 09/04/24.
//
//  Escreva um programa que imprima os seguintes padrões separadamente, um abaixo do outro, cada padrão separado do próximo por uma linha em branco. Use laços for para gerar os padrões. Todos os asteriscos (*) devem ser impressos por uma única declaração na forma: cout << ‘*’ ; o que faz com que os asteriscos imprimam lado a lado, uma declaração no formato cout << '\n'; pode ser usado para passar para a próxima linha. Uma instrução no formato cout << ' '; pode ser usado para exibir um espaço para os dois últimos padrões. (Dica: os dois últimos padrões exigem que cada linha comece com um número apropriado de espaços em branco.)
//  Crédito extra: combine seu código dos quatro problemas separados em um único programa que imprime todos os quatro padrões lado a lado, fazendo um uso inteligente dos laços aninhados for. Para todas as partes deste exercício - minimize o número de asteriscos e espaços e o número de instruções que imprimem esses caracteres.
//

#include <iostream>

using namespace std;

int main() {

   for ( int linha{ 1 }; linha <= 10; ++linha ) {

      for ( int coluna{ 1 }; coluna <= linha; ++coluna )
         cout << '*';
      for ( int coluna{ 10 }; coluna > linha; --coluna )
         cout << ' ';

      cout << '\t';

      for ( int coluna{ 10 }; coluna >= linha; --coluna )
         cout << '*';
      for ( int coluna{ 1 }; coluna < linha; ++coluna )
         cout << ' ';

      cout << '\t';

      for ( int coluna{ 1 }; coluna < linha; ++coluna )
         cout << ' ';
      for ( int coluna{ 10 }; coluna >= linha; --coluna )
         cout << '*';

      cout << '\t';

      for ( int coluna{ 10 }; coluna > linha; --coluna )
         cout << ' ';
      for ( int coluna{ 1 }; coluna <= linha; ++coluna )
         cout << '*';

      cout << endl;
   }

   return 0;
}
