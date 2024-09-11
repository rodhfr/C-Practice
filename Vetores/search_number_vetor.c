#include <stdio.h>

int procuraNumeroVetor(int V[], int t, int n){
    for (int i = 0; i < t; i++){
        if (V[i] == n){
            printf("Elemento esta no indice %d", i);
            return i;
        }
    }
    printf("Elemento nao encontrado no vetor passado como parametro");
}

int main(){
    int vetor[4] = {1,2,3,4}, tamanho = 4;
    int numero = 5;
    procuraNumeroVetor(vetor, tamanho, numero);
}