//
//  main.cpp
//  item 5
//
//  Created by Adria on 15/04/24.
//
//  Escreva um código que reproduza o jogo de “adivinhar o número” da seguinte forma: Seu programa escolhe o número a ser adivinhado selecionando um número inteiro aleatoriamente no intervalo de 1 a 1000. O programa exibe

//  Eu tenho um número entre 1 e 1000.
//  Você consegue adivinhar o meu número?
//  Digite seu primeiro palpite.

//  O jogador digita um primeiro palpite. O programa responde com um dos seguintes:
//  1. Excelente! Você adivinhou o número! Você gostaria de jogar novamente (s ou n)?
//  2. Muito baixo. Tente novamente.
//  3. Muito alto. Tente novamente.

//  Se o palpite do jogador estiver incorreto, seu programa deve repetir até que o jogador finalmente obtenha o número correto. Seu programa deve continuar dizendo ao reprodutor Muito alto ou Muito baixo para ajudar o leitor a se concentrar na resposta correta. Após o término do jogo, o programa deve solicitar ao usuário que digite "s" para jogar novamente ou "n" para sair do jogo.
//
#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main() {

    srand( time( 0 ) );

   char jogue;

   cout << "Tem que ser um número de 1 a 1000" << "\n Qual será o número que escolhi?"
      << "\n Primeira tentativa\n";

   do {

      const int numero{ 1 + rand() % 1000 };
      int digite;

      cout << endl;

      while ( true ) {

         cout << "Número: ";
         cin >> digite;

         if ( digite == numero )
            break;

         cout << "Muito" << ( digite < numero ? " baixo" : " alto" )
            << ". Tente novamente.\n";
      }

      cout << "\n Excelente! Você adivinhou o número!"
         << "\n Você gostaria de jogar novamente (s ou n)? ";
      cin >> jogue;

   }
    
    while(jogue == 's');
    while (jogue == 'n') break;
    

   return 0;
}


