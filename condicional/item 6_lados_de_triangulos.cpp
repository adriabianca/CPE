//
//  item 6.cpp
//  item 6
//
//  Created by Adria on 08/04/24.
//
//  Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é Equilátero, Isósceles ou Escaleno
//
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;

    cout << "Tamanho de x: ";
    cin >> x;

    cout << "Tamanho de y: ";
    cin >> y;

    cout << "Tamanho de z: ";
    cin >> z;

    
    if( (x==y) || (x==z) || (y==z)) // == igual a 
    
        if( (x==y)&&(y==z) )
            cout<<"Equilátero\n";
        else
            cout<<"Isósceles\n";
        else
        cout<<"Escaleno\n";

    return 0;
}
