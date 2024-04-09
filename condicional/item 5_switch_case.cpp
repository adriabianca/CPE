//
//  item 5.cpp
//  item 5
//
//  Created by Adria on 08/04/24.
//
//  Crie um programa que detecta se um caractere fornecido de entrada é uma vogal usando o comando switch case
//

#include <iostream>
using namespace std;

int main()
{
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    switch(letra)
    {
        case 'a':
        case 'A':
            cout <<" Vogal A"<< endl;
            break;

        case 'e':
        case 'E':
            cout <<"Vogal E"<< endl;
            break;

        case 'i':
        case 'I':
            cout <<"Vogal I"<< endl;
            break;

        case 'o':
        case 'O':
            cout <<"Vogal O"<< endl;
            break;
            
        case 'u':
        case 'U':
            cout <<"Vogal U"<<endl;
            break;
            
        default:
            cout <<"Náo é vogal" << endl;
    }

    return 0;
}
