#include <stdio.h>
#include <ctype.h>



void upperBegin(char frase[]){
    int i = 0;
    while (frase[i] == ' '){
        i++;
    }
    
    if (frase[i] != '\0') {
        frase[i] = toupper(frase[i]);
    }

    for (i; frase[i] != '\0'; i++){
        if (frase[i] == ' ' && frase[i+1] != ' '){
            frase[i+1] = toupper(frase[i+1]);
        }
    }
}

int main(){
    char frase_muito_legal[100];

    printf("Me diga sua frase muito legal: \n");
    scanf("%[^\n]s", frase_muito_legal);

    upperBegin(frase_muito_legal);
    printf("%s \n", frase_muito_legal);
}