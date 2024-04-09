//
//  item 2.cpp
//  item 2
//
//  Created by Adria on 08/04/24.
//
//  Crie uma calculadora álcool x gasolina. O etanol vale a pena quando custar até 70% do valor da gasolina. Como é feito o cálculo? Dividimos o valor do litro do álcool pelo da gasolina. Quando o resultado é menor que 0,7, exiba uma recomendação dizendo para abastecer com álcool. Se for maior, exiba a recomendação para escolher a gasolina
//

#include <iostream>
 
using namespace std;
 
// função principal do programa

int main(){
    
    double etanol;
    double gasolina;
    
    cout << "Valor do etanol por litro:" <<endl;
    cin >> etanol;
    
    cout << "Valor da gasolina por litro:"<< endl;
    cin>> gasolina;
    
    if ((etanol/gasolina)> (70 / 100.0)) { //compesador do valor
        cout << "Ponha gasolina "<< endl;
    }
    
    else{
        cout<< "Ponha álcool"<< endl;
    }
    cout << "\n" << endl;
 
  return 0;

}
