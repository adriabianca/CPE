//
//  main.cpp
//  item 4
//
//  Created by Adria on 05/04/24.
//
// Decimal para binário

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int num;
    int resto_variavel;
    int acumulo=0;
    int base =2;
    int i=0;


    cout << "\n";
    cout << "Binário: ";
    cin >> num;
    
    while (num > 0){
        resto_variavel = num % 10;
        
        acumulo = acumulo + (resto_variavel * pow(base,i)); // (2 equivalente a base e i equivalente o expoente
        num = num/10;
        i+=1;
        
    }
    cout << "\n Decimal: " << acumulo ;
    
    return 0;
}

