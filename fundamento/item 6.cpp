//
//  main.cpp
//  item 6.1
//
//  Created by Adria on 02/04/24.
//
// Ler dois inteiros e então determine e imprima se o primeiro é múltiplo do segundo.

#include <iostream>

using namespace std;

int main() {

    int n1;
    int n2;

    cout << "Digite dois números: ";
    cin >> n1 >> n2;

       if ( n2 % n1 == 0 ) cout << n1 << " É múltiplo de " << n2 << endl;
 

   return 0;
}
