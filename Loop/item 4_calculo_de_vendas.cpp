//
//  main.cpp
//  item 4
//
//  Created by Adria on 09/04/24.
//
//  Cálculo de vendas) Um varejista on-line vende cinco produtos cujos preços de varejo são os seguintes: Produto 1, R$ 2,98; produto 2, R$ 4,50; produto 3, R$ 9,98; produto 4, R$ 4,49 e produto 5, R$ 6,87. Escreva um aplicativo que leia uma série de pares de números da seguinte forma:
//  A. número do produto
//  B. quantidade vendida
//  Seu programa deve usar uma instrução switch para determinar o preço de varejo para cada produto. Deve calcular e exibir o valor total de varejo de todos os produtos vendidos. Use um laço 'while' para determinar quando o programa deve parar e exibir os resultados finais.
//
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

   double total{0};

   int item{ -1 };

   while (item) {

      cout << "Enumeraçao do item (1-5) [0 para sair e fazer a soma total]: ";
      cin >> item;

      if ( item < 1 || 5 < item )
         continue;

      int quantidade;

      do {
         cout << "Valor da quantidade do item desejado: ";
         cin >> quantidade;
      } while ( quantidade < 0 );

      switch ( item ) {
      case 1:
         total += quantidade * 2.98;
              break;
      case 2:
         total += quantidade * 4.50;
              break;
      case 3:
         total += quantidade * 9.98;
              break;
      case 4:
         total += quantidade * 4.49;
              break;
      case 5:
         total += quantidade * 6.87;
              break;
      }

      cout << endl;
   }

    cout << fixed << setprecision(2);
      cout << "Valor total dos produtos vendidos: " << total << endl;

   return 0;
}
