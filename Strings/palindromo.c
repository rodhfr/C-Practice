#include <stdio.h>


int isPalindromo(char string[]){
    int t = 0;
    int i = 0;
    
    for (i = 0; string[i] != '\0'; i++){
        t++;
    }

    for (i = 0; i < t / 2; i++){
        if (string[i] != string[t - i - 1]){
            printf("not a palindromo");
            return 0;
        }
    }
    printf("palindromo");
    return 1;
}


int main(){
    char palavra[100];
    printf("Digite palavra \n");
    scanf("%s", palavra);
    isPalindromo(palavra);
    return 0;
}