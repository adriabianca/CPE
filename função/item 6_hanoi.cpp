//
//  main.cpp
//  item 6
//
//  Created by Adria on 15/04/24.
//
//  Torres de Hanói

//  Todo programador iniciante deve lidar com certos problemas clássicos. As Torres de Hanói (veja a figura abaixo) são uma das mais famosas. Diz a lenda que, em um templo no Extremo Oriente, os monges estão tentando mover uma pilha de discos de uma estaca para outra. A pilha inicial tinha 64 discos enfiados em uma estaca e organizados de baixo para cima, diminuindo o tamanho. Os monges estão tentando mover a pilha dessa estaca para uma segunda estaca, sob as restrições de que exatamente um disco é movido por vez e que em nenhum momento um disco maior pode ser colocado acima de um disco menor. Uma terceira estaca está disponível para a retenção temporária de discos. Supostamente, o mundo terminará quando os sacerdotes concluírem sua tarefa; portanto, há pouco incentivo para facilitarmos seus esforços. Vamos supor que os padres estão tentando mover os discos da estaca 1 para a estaca 3. Desejamos desenvolver um algoritmo que imprima a sequência precisa das transferências de disco estaca-estaca.

//  Se abordássemos esse problema com métodos convencionais, rapidamente nos encontraríamos irremediavelmente envolvidos no gerenciamento dos discos. Em vez disso, se atacarmos o problema com a recursão em mente, ele se tornará imediatamente tratável.

//  Mover   discos pode ser visualizado em termos de mover apenas discos (daí a recursão), da seguinte maneira:
//      a) Mova   discos da estaca 1 para a estaca 2, usando a estaca 3 como uma área de retenção temporária.
//      b) Mova o último disco (o maior) da estaca 1 para a estaca 3.
//      c) Mova os discos   da estaca 2 para a estaca 3, usando a estaca 1 como uma área de retenção temporária.

//  O processo termina quando a última tarefa envolve mover disco n = 1, ou seja, o caso base. Isso é feito trivialmente movendo o disco sem a necessidade de uma área de retenção temporária.

//  Escreva um programa para resolver o problema das Torres de Hanoi. Use uma função recursiva com quatro parâmetros:
//      a) O número de discos a serem movidos
//      b) A estaca na qual esses discos são inicialmente enfiados
//      c) A estaca para o qual essa pilha de discos deve ser movida
//      d) A estaca a ser usada como área de retenção temporária

//  Seu código deve imprimir as instruções precisas necessárias para mover os discos do ponto inicial para o ponto de destino. Por exemplo, para mover uma pilha de três discos da estaca 1 para a estaca 3, seu programa deve imprimir a seguinte série de movimentos:

//          1 → 3 (Isto indica mover um disco da estaca 1 para a estaca 3)
//          1→2
//          3→2
//          1→3
//          2→1
//          2→3
//          1→3
//

#include <iostream>

using namespace std;

void hanoi( int, int, int, int );

int main() {

   int d;

   do {
      cout << "Quantos discos? ";
       cin >> d;
   }
    while ( d < 1 );

    hanoi( d, 1, 3, 2 );

   return 0;
}

void hanoi( int discos, int origem, int destino, int temporario ) {

   if ( discos ) {
      hanoi( discos - 1, origem, temporario, destino );
      cout << origem << " -> " << destino << endl;
      hanoi( discos - 1, temporario, destino, origem );
   }
}
