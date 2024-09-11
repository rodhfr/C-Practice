#include <stdio.h>

int scanstring(char string[], char crt){
    int j;
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == crt){
            j++;
        }
    }
    return j;
}

int main(){
    char string[100], caractere;
    int vezes;
    
    printf("Digite a string: \n");
    scanf("%s", string);

    printf("Digite o char: \n");
    scanf(" %c", &caractere);

    vezes = scanstring(string, caractere);
    printf("essa e quantas vezes rola o char: '%d' vezes", vezes);

    return 0;

}