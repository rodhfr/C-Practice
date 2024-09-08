#include <stdio.h>
#include <string.h>

int comparaString (const char *str1, const char *str2){
    int i, iguais = 0;

    for (i=0; str1[1] == str2[i]; i++)
        if (str1[i] == '\0')
            iguais = 1;
        return iguais; }

int main(){
    char palavra1[0] = "bola", palavra2[] = "bola";
}