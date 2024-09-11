#include <stdio.h>


void contagemVogais(char string[]){
    int j = 0;
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] ==  'a' || string[i] == 'e' || string[i] =='i'|| string[i] == 'o' || string[i] == 'u'){
            j++;
            string[i] = '*';
        }
    }
}


int main(){
    char palavra[100] = "ratazana gostosa";
    
    printf("%s \n", palavra);
    contagemVogais(palavra);
    printf("%s \n", palavra);

}