//
//  item 9.cpp
//  item 9
//
//  Created by Adria on 03/04/24.
//
// Valor total a pagar e o custo médio por quilometro

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;


int main (){
    
    int km; //primeira variável
    float custo;// segunda variável
    
    // dados
    cout << "Quantidade de Km percorridos: ";
    cin>> km;
    
    if (km<=50) {
        custo = km *1.75;
    }
    else if (km > 50 and km <=150)
    {
        custo = (50* 1.75) + (km *1.75) + ((km-50) *1.65);
    }
    else if (km > 50 and km >150)
    {
        custo = (50* 1.75) + (100*1.65) + ((km-150) *1.5);
    }
    cout << std::setprecision (2)<< std::fixed;
    cout << "Valor pago: R$" <<custo<< endl;
        
        return 0;
    }
