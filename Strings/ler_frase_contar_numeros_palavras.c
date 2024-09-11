#include <stdio.h>


int contadorFrases(char frase[]){
    int j = 0;
    int i = 0;

    while (frase[i] == ' ') {
        i++;
    }

    for (i; frase[i] != '\0'; i++){
        if (frase[i] == ' ' && frase[i+1] != ' '){
            j++;
        }
    }
    return j + 1;
}


int main(){
    char frase[100];
    int palavras;

    printf("Diga sua frase: \n");
    scanf("%[^\n]s", frase);

    palavras = contadorFrases(frase);

    printf("Sua frase tem '%d' palavras \n", palavras);

}