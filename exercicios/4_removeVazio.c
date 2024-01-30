#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void removeVazio(char texto[]) {
    char newStr[50];
    int aux = 0;

    for(int i = 0; i < strlen(texto); i++){
        if(texto[i] != ' '){
            newStr[aux] = texto[i];
            aux++;
        }
    }
    newStr[aux] = '\0';

    printf("string sem espaço %s", newStr);
}

int main() {
    setlocale(LC_ALL, "");

    char str[] = "Revisao de linguagem C - 15/08";
    removeVazio(str);

    return 0;
}
