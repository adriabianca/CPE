//
//  item 6.cpp
//  item 6
//
//  Created by Adria on 14/04/24.
//
//  Escreva um programa para jogar um jogo de adivinhação de números. O usuário pensa em um número entre 1 e 100 e seu programa faz perguntas para descobrir qual é o número (por exemplo, “O número em que você está pensando é menor que 50?”). Seu programa deve ser capaz de identificar o número depois de fazer no máximo sete perguntas. Dica: Use os operadores <, <=, a construção if-else e a função rand caso tenha dúvida.
//

#include <iostream>

using namespace std;


int main(){

    bool acertou = false;
    int perguntas = 0;
    int maior = 100;
    int menor = 0;
    int metade;
    char s_n;
    
    cout << "Um número de 1 a 100, pense" << endl;
    
    while(!acertou && perguntas < 7){
        metade = (maior + menor) / 2;
        if (metade == 0) break;
        
        cout << "O numero que pensou " << metade << "! (S/N)" << endl;
        cin >> s_n;

        if ((s_n =='S' || s_n=='s')) {
            acertou = true;
        } else if ((s_n!='N' && s_n !='n')){
            continue;
        }

        cout << "Seu numero é maior que " << metade << "? (S/N)" << endl;
        cin >> s_n;
        
        if ((s_n=='S' || s_n=='s')) {
            menor = metade;
            perguntas++;
        } else if ((s_n=='N' || s_n=='n')){
            maior = metade;
            perguntas++;
        } else {
            continue;
        }
    }
    if (acertou) cout << "Acertou: "<< metade;
    if (!acertou && metade == 0) cout << "Nao pode";
    if (!acertou && metade == 99) cout << "Valor 100 (S/N)" << endl;
    
    cin >>s_n;
    
    if ((s_n=='S' || s_n=='s')) {
       cout << "Acertou: "<< metade;
    } else if (( s_n=='N' || s_n =='n')){
      cout << "Errou";
    }
   
}
