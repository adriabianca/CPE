//
//  item 7.cpp
//  item 7
//
//  Created by Adria on 02/04/24.
//
// Número inteiro e ver se é primo ou náo

#include <stdio.h>
#include <cmath>

int main()
{
    int x; //entrada da variável
    bool primo;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    primo = true;
   
    for (int p = 2; p < x; p++)
    {
        if (x % p == 0)
        {
            primo = false;
            printf("%d nao é primo", x);
        }
    }
    if (primo)
        printf ("%d é primo", x);
    return 0;
}
