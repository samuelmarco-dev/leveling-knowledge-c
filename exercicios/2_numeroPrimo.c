#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int primo(int x) {
    int i, aux;
    
    for(i=0; i < x; i++) {
        int divisivelPorUm = i % 1 == 0;
        int divisivelPorSiMesmo = i % i == 0;

        printf("Número iterado: %d\n", i);
        if(divisivelPorUm && divisivelPorSiMesmo) aux++;
        else continue;
    }

    if(aux == 2) return 1;
    else return 0;
}

void verificaRetorno(int boolean, int primo) {
    if(boolean == 1) {
        printf("O numero %d é primo", primo);
        return;
    }

    printf("O numero %d não é primo", primo);
}

int main() {
    setlocale(LC_ALL, "");

    int number = 7;
    int numeroPrimo = primo(number);
    verificaRetorno(primo(number), number);

    return 0;
}
