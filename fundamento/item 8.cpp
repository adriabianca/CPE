//
//  item 8.cpp
//  item 8
//
//  Created by Adria on 02/04/24.
//
// Valor de dois catetos e realizar o cálculo da hipotenusa

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float c1,c2;

    // dados
    
    cout <<"Primeiro numero:";
    cin >> c1;
    cout <<"Segundo numero:";
    cin >> c2;
    
    //operaçoes
    
    cout <<"Hipotenusa: "<< sqrt(pow(c1,2) + pow (c2,2))<<endl;

    return 0;

}

