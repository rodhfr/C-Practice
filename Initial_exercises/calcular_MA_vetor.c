#include <stdio.h>

int calculaMedia(const int *vetor){
    int i, resultado = 0;
    for (i = 0; i < 10; i++){
        resultado += vetor[i];
    }
    resultado = resultado / 10;
    return resultado;
}

int somaVetor(const int *vetor){
    int i, resultado = 0;
    for (i = 0; i < 10; i++){
        resultado += vetor[i];
    }
    return resultado;
}

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int soma = 0, media = 0;
    soma = somaVetor(vetor);
    media = calculaMedia(vetor);
    printf("a soma e %d \n", soma);
    printf("a media e %d \n", media);
    return 0;
}