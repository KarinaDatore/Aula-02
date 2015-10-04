/* 
 * File:   main.cpp
 * Author: karin
 *
 * Created on 11 de Agosto de 2015, 14:00
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int vetor[10];
    int contador, soma, media, maior, menor;
    soma = 0;
    
    cout<<"Insira 10 valores seguidamente: "<<"\n";
    
    for(contador = 0; contador < 10; contador++){
        cin>>vetor[contador];
        
        if(contador == 0){
            maior = vetor[contador];
            menor = vetor[contador];
        }
        
        if(vetor[contador] < menor){
            menor = vetor[contador];
        }
        
        if(vetor[contador] > maior){
            maior = vetor[contador];
        }
        
        soma = soma + vetor[contador];
    }
    
    media = (soma / 10);
    
    cout<<"Resultado: "<<"\nSoma: "<<soma<<"\nMedia: "<<media<<"\nMaior: "<<maior<<"\nMenor: "<<menor<<"\n";
    
    return 0;
}

