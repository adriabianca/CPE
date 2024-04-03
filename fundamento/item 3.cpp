//
//  item 3.cpp
//  item 3
//
//  Created by Adria Dias on 02/04/24.
//
// Fornecer o raio do círculo e depois imprimir o diametro da circunferencia e a área

#include <iostream>
using namespace std;

int main() {
    double r; //entrada do raio
    // constante Pi
    const double Pi = 3.14159;
    
    // entrada
    
    cout << "Valor do raio:";
    cin >> r;
    cout << "Diametro =" << r*2 << endl;
    cout <<"Area = :"<< pow(r,2.0) * Pi << endl;
    
    
    
    return 0;

}
