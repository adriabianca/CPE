//
//  main.cpp
//  item 3
//
//  Created by Adria on 15/04/24.
//
//  Um número inteiro é considerado um número perfeito se a soma de seus fatores, incluindo 1 (mas não o número em si), for igual ao número. Por exemplo, 6 é um número perfeito, porque 6 = 1 + 2 + 3. Escreva a função perfect que determina se o número do parâmetro é um número perfeito. Use esta função em um código que determina e imprime todos os números perfeitos entre 1 e 1000. Imprima os fatores de cada número perfeito para confirmar que o número é realmente perfeito. Desafie o poder do seu computador testando números muito maiores que 1000


#include <iostream>

using namespace std;

bool numero_perfeito(int numero) {
    int soma = 0;
    
    // Encontra todos os divisores próprios do número e os soma
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    
    // Verifica se a soma dos divisores é igual ao número original
    if (soma == numero) {
        return true;
    } else {
        return false;
    }
}


int main() {
        for(int i = 1; i <= 1000; i++){
            if (numero_perfeito(i)){
                cout << i << " é número perfeito " << endl;
            }
    
    }
    return 0;
}
