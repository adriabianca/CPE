//  item 8.cpp
//  item 8
//
//  Created by Adria on 08/04/24.
//
//  Codifique um programa que faça a leitura de dois número reais. A seguir o programa lê um caractere, que deve ser +, -, * ou /, e realiza a operação indicada pelo caractere sobre os valores lidos. Seu programa deve usar o comando switch. O programa deve imprimir o resultado da operação realizada sobre eles, como mostra o exemplo a seguir (exibindo exatamente duas casas decimais)
//

#include <iostream>
#include<cmath>
#include <iomanip>

using namespace std;
using std::setprecision;


int main (){
   
    float a,b;

    char operacao;
    
    cout << std::setprecision (3)<< std::fixed; // ponto flutuante
    
    // operacao
    
    cout<< "Digite o primeiro número: " << endl;
    cin >> a;
    
    cout << "Operaçao desejada:" << endl;
    cin >> operacao;
    
    cout << "Digite o segundo número:" << endl;
    cin >> b;
    
    //seleçao de operaçao
    
    switch (operacao)
    {
        case '+':
            cout << "Adiçao: " <<  a  << operacao << b << "  = " << a + b << endl;
            break;
            
        case '-':
            cout << "Subtracao: " <<   a  << operacao <<   b  << " = " << a - b << endl;
            break;
        
        case '*':
            cout << "Multiplicaçao: "  << a << operacao <<  b << " = " << a * b<< endl;
            break;
            
        case '/':
            cout << "Divisao: " <<  a  << operacao <<  b  << " = " << a/b << endl;
            break;
            
        default:
            cout << "Inválido\n"<< endl;
    }
    
    
    
    return 0;
}
