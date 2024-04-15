//
//  item 1.cpp
//  item 1
//
//  Created by Adria on 09/04/24.
//
//  O fatorial de um número inteiro não negativo n é escrito como n! (pronunciado “n fatorial”) e é definido do seguinte modo: n! = n × (n − 1) × (n − 2) × . . .1 para valores n ≥ 1, n! = 1 para n = 0. Por exemplo, 5! = 5 × 4 × 3 × 2 × 1, que é 120. Os fatoriais aumentam de tamanho muito rapidamente. Qual é o maior fatorial que seu programa pode calcular antes de gerar um estouro de memória?
//  A) Escreva um programa que leia um número inteiro não negativo e calcule e imprima seu fatorial.

//  B) Escreva um programa que calcule o valor da constante matemática e usando a seguinte fórmula (Nota: Seu código pode parar após somar 10 termos.) e = 1 + 1 + 1 + 1 + . . . x 1! 2! 3!

// C) Escreva um programa que calcule o valor da constante matemática e usando a seguinte fórmula (Nota: Seu código pode parar após somar 10 termos.) ex = 1 + x + x2 + x3 + . . . 1! 2! 3!
//

#include <iostream>

using namespace std;

int main() {

// questao a

   int n{ -1 };
   int fatorial{ 1 };

   while ( n < 0 ) {
      cout << "Número natural exceto zero: ";
      cin >> n;
   }

   while ( n > 1 ) {
      fatorial *= n;
       n--;
   }

   cout << "O seu fatorial é: " << fatorial << endl;

    
// questao b

   n = 0;
   fatorial = 1;

   int constante;

   cout << "\nConstante: ";
   cin >> constante;

   double e{ 1 };

   while ( ++n <= constante ) {
      fatorial *= n;
      e += 1 / fatorial;
       
   }

   cout << "Constante (e): " << e << endl;

    
    
// questao c

   n = 0;
   fatorial = 1;

   double x;

   cout << "\nx: ";
   cin >> x;

   double xn{ 1.0 };
   double constantex{ 1.0 };

   while ( ++n <= constante ) {
      xn *= x;
      fatorial *= n;
      constantex += xn / fatorial;
   }

   cout << "e^x é: " << constantex << endl;

   return 0;
}
