//
//  main.cpp
//  item 1
//
//  Created by Adria on 15/04/24.
//
//  Implemente a seguinte função para retornar o equivalente em Fahrenheit de uma temperatura Celsius.
//  Use esta função para escrever um código que imprima uma tabela mostrando os equivalentes em Fahrenheit de todas as temperaturas Celsius de 0 a 100 graus. Use uma posição de precisão à direita do ponto decimal para os resultados. Imprima as saídas em um formato tabular limpo que minimize o número de linhas de saída enquanto permanece legível.

//

#include <iomanip>
#include <iostream>

using namespace std;


int fahrenheit( int );

int celsius( int );



int main() {

    cout << "\nTransformaçao de Fahrenheit para Celsius:\n";

    for ( int f{ 32 }; f <= 212; ++f )
        cout << setw( 6 ) << f << " - " << celsius( f )
            << ( f % 5 ? '\t' : '\n' );

        cout << endl;
        return 0;
        }

    int celsius( int fah ) { // far = fahrenheit
        return static_cast< int >( ( fah - 32 ) / 1.8 );
    }

    int fahrenheit( int c ) { // c = celsius
        return static_cast< int >( c * 1.8 + 32 );
    }
