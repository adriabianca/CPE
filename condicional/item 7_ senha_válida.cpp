//
//  item 7.cpp
//  item 7
//
//  Created by Adria on 08/04/24.
//
//  Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234. Devem ser impressas as seguintes mensagens: permitido ou negado
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int senha;
    int senhasenha = 1234;
    
    cout << "Digite a sua senha: ";
    cin >> senha;
    
    if (senha== senhasenha) { // igual a
        cout << "ACESSO PERMITIDO" << endl;
        
        
    }
    
    else{
        cout<< "ACESSO NEGADO" << endl;

}
    cout <<"\n"<< endl;
    
    return 0;
}
