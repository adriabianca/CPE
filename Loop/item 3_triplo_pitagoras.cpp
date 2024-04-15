//
//  main.cpp
//  item 3
//
//  Created by Adria on 09/04/24.
//
//  (Triplos de pitágoras) Um triângulo retângulo pode ter lados que são todos inteiros. O conjunto de três valores inteiros para os lados de um triângulo retângulo é chamado de triplo de pitágoras. Esses três lados devem satisfazer a relação de que a soma dos quadrados de dois dos lados é igual ao quadrado da hipotenusa. Encontre todos os triplos pitagóricos para lado1, lado2 e hipotenusa, todos com tamanho não superior a 20. Use um laço for triplamente aninhado que tente todas as possibilidades. Este é um exemplo de computação de "força bruta". Você aprenderá em cursos de ciência da computação mais avançados que existem muitos problemas interessantes para os quais não existe uma abordagem algorítmica conhecida além da pura força bruta
//


#include <iostream>
#include <math.h>

using namespace std;

int main() {

   for ( int hipotenusa{ 1 }; hipotenusa <= 20; ++hipotenusa )
    for ( int lado1{ 1 }; lado1 < hipotenusa; ++lado1 )
         for ( int lado2{ 1 }; lado2 <= lado1; ++lado2 )
            if ( pow(hipotenusa,2)== pow(lado1,2)+ pow(lado2,2) )
               cout << hipotenusa << '\t' << lado1 << '\t' << lado2 << endl;

   return 0;
}
