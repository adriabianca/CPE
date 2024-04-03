//
//  item 5.cpp
//  item 5
//
//  Created by Adria on 02/04/24.
//
// Largura e comprimento com um ponto flutuante para achar a área

#include <iomanip>
#include <iostream>

using std::setprecision;
using std::cin;
using std::cout;
using std::endl;

int main (){
    
    float l; //primeira variável
    float c;// segunda variável
    
    // dados
    cout << std::setprecision (4)<< std::fixed; //ponto flutuante com quatro casas decimais
    cout << "Largura:" << endl;
    cin>>l;
    cout <<"Comprimento:" <<endl;
    cin >> c;
    cout << "Área (mˆ2):" << l*c <<endl;
    
    
    return 0;
}

    
