//ler frase 

// contar o numero de palavras dessa frase (sao separadas por whitespaces)


#include <stdio.h>
#include <string.h>


int contador_Palavras(const char *frase){
    int i, q;
    for (i = 0; frase[i] != '\0' ; i++){
        if (frase[i] == " " && frase[i+i] != "")
            q++;
    }
}

int main(){
    int valor_ocorrencia;
    char frase[100];
    printf("Me diga a string");

    valor_ocorrencia = ocorrenciaChar(letter, str);
    printf("%d", valor_ocorrencia);

    return 0;
}



