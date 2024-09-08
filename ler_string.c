#include <stdio.h>
#include <string.h>

//calcular ocorrencias desse char na string
int ocorrenciaChar(char letter, const char *str){
    int i, q = 0;
    for (i = 0; i < strlen(str); i++){
        if (str[i] == letter)
            q++;
    }
    return q;
}

//ler string e um char qualqeur
int main(){
    int valor_ocorrencia;
    char str[20], letter;
    printf("Me diga a string");
    scanf("%s", &str);
    printf("me diga o character");
    scanf(" %c", &letter);
    valor_ocorrencia = ocorrenciaChar(letter, str);
    printf("%d", valor_ocorrencia);

    return 0;
}

