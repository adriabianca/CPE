//
//  main.cpp
//  item 4
//
//  Created by Adria on 15/04/24.
//
//  Os computadores estão desempenhando um papel crescente na educação. Escreva um programa que ajude um aluno do ensino fundamental a aprender multiplicação. Use o módulo aleatório para produzir dois números inteiros positivos de um dígito. O programa deve exibir uma pergunta, como
//  Quanto é 6 vezes 7? O aluno digita a resposta. Em seguida, o programa verifica a resposta do aluno. Se estiver correto, imprima a string "Muito bom!" na tela e faça outra pergunta de multiplicação. Se a resposta for errada, exibir "Não. Por favor, tente novamente." e deixe o aluno tentar a mesma pergunta repetidamente até que o aluno finalmente acerte. Uma função separada deve ser usada para gerar cada nova pergunta. Este método deve ser chamado uma vez quando o programa iniciar a execução e sempre que o usuário responder à pergunta corretamente. (Dica: para converter os números do problema em seqüências de caracteres para a pergunta, use a função str. Por exemplo, str (7) retorna "7").
//

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    srand(0);
    int num1;
    int num2;
        const int pare=-2;

    
    
    bool faca=true;
        int multiplicacao=0;
        int input;
        cout<<"Digite '-2' ao querer parar a aritmetica.\n";
    
    
    while(faca){
        num1=rand()%10+1;
        num2=rand()%10+1;

        cout<<"Quanto é "<<num1<<" vezes "<<num2<< "?";

        cin>>input;
            
        multiplicacao=num1*num2;

        if(input==pare){
            faca=false;
                cout<<"Fim do programa.\n";
            
        }
        else if(multiplicacao==input)
            cout<<"Muito bom!"<< endl;
                
        else {

            
bool repetir=true;

    while(repetir){

        cout<<"Não. Por favor, tente novamente";
        cin>>input;
        
            if(multiplicacao==input){

            cout<<"Muito bom!"<< endl;
            repetir=false;
            
                            }
        
                }// fim do while do repetir
            
            }// fim do else do repetir
        
        }// fim do while do faça

    return 0;
}

