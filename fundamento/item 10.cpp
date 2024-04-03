//
//  item.cpp
//  item 10
//
//  Created by Adria on 03/04/24.
//

#include <iostream>
#include <set>
#include <string>
#include <cmath>

using namespace std;

bool evogal (char l) { //v de vogal e l de letra
    l = tolower (l);

    return l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u';

}
char encriptav (char l){
    l = tolower(l);
    
    if(l == 'a') return 'i';
    if(l == 'e') return 'o';
    if(l == 'i') return 'u';
    
    return l;
}

int main() {
    
    string palavra;
    int quantidade = 0; //quantidade de vogal
    set <char> vogal;
    
    cout <<"Palavra com 5 letras: ";
    cin>> palavra;
    
    for (char l: palavra)
    {
        if (evogal(l)){
            quantidade +=1;
            vogal.insert(l);
            
        }
    }
    cout << "Numero de vogal: "<< quantidade<< endl;
    cout << "Vogal: ";
    for ( char v: vogal){
        cout<< v<< "";
    }
    cout<< "\n";
    string criptografada = "";
    for (char l: palavra ) criptografada += (encriptav(l));
    
    cout << "Criptada: "<< criptografada<< endl;
    
    return 0;
    }
    
