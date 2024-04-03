//
//  main.cpp
//  item 6.1
//
//  Created by Adria on 02/04/24.
//
// Ler dois inteiros e então determine e imprima se o primeiro é múltiplo do segundo.

#include <stdio.h>
using namespace std;

int main()
{

    //variaveis
    int l;
    int m;

    printf("Digite dois números em l é multiplo de m: ");
    scanf("%d %d", &l, &m);

    if (l % m == 0)
    printf("l é múltiplo de m\n");
    else
    printf("m nao é múltiplo de b\n");

    return 0;
}
