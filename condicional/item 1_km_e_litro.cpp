//
//  item 1.cpp
//  item 1
//
//  Created by Adria on 08/04/24.
//
//  Motoristas se preocupam com a autonomia que seus carros fazem ao dirigir. Um motorista gravou o registro de quantos litros e quantos kilometros seu carro fez para cada enchida no tanque. Crie um código que receba como entrada a quantidade de litros e a quantidade de quilômetros percorrido pelo carro e calcule o consumo de cada tanque completado em km/litro. Após processar todas as entradas, calcule e imprima a média do consumo que o carro fez. (=total de kilometros percorrido dividio pelo total de gasolina consumida em litros)
//
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

   int l; //litros
   int km; // quilometros
   int l_totais{ 0 };
   int km_totais{ 0 };

   cout << "Quantos quilometros andou: ";
   cin >> km;

   while ( km != 1 ) {

      cout << "Quantos litros usou: ";
      cin >> l;
       
       l_totais += l; //Atribuiçao de soma
       km_totais += km; //Atribuiçao de soma

       cout << "Quilometros dirigidos por tanque (digite 1 para sair): "<< 1.0 * km / l << endl;
       
       cout << "Média de km/l: " << 1.0 * km_totais / l_totais << endl;
     
       cout << "Quilometros dirigidos (digite 1 para sair): " << endl;
       cin >> km;
       
   }

   return 0;
}
