#include <stdio.h>
#include <string.h>

int somaVetor(int *vetor, int tamanho_vetor){
    int i, resultado = 0;
    for (i = 0; i < tamanho_vetor; i++){
        resultado += vetor[i];
    }
    return resultado;
}

int mediaVetor(int *vetor, int tamanho_vetor){
    int i, resultado = 0;
    for (i = 0; i < tamanho_vetor; i++){
        resultado += vetor[i];
    }
    return resultado / tamanho_vetor;
}

int acimaMediaVetor(int *vetor, int tamanho_vetor){
    int i, resultado = 0, media = 0, acimaMedia = 0;
    for (i = 0; i < tamanho_vetor; i++){
        resultado += vetor[i];
    }
    media = resultado / tamanho_vetor;
    for (i = 0; i < tamanho_vetor; i++){
        if (vetor[i] > media)
            acimaMedia++;
    }
    return acimaMedia;
}

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    printf("%d", tamanho_vetor);
    int soma = 0, media = 0, acima_da_media = 0;

    soma = somaVetor(vetor, tamanho_vetor);
    media = mediaVetor(vetor, tamanho_vetor);
    acima_da_media = acimaMediaVetor(vetor, tamanho_vetor);

    printf("%d \n", soma);
    printf("%d \n", media);
    printf("%d \n", acima_da_media);
}