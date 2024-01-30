#include <stdio.h>
#include <stdlib.h>

void percentualDespesas(float gastos[]) {
    float soma = calculaSoma(gastos);
    float porcentagem = 0;

    for(int i = 0; i < 10; i++){
        porcentagem = (gastos[i]/soma)*100;
        printf("%.3f representa %.3f%% de %.3f\n", gastos[i], porcentagem, soma);
        porcentagem = 0;
    }
}

int calculaSoma(float gastos[]) {
    float soma = 0;

    for(int i = 0; i < 10; i++){
        soma += gastos[i];
    }

    return soma;
}

int main() {
    float arrayDespesas[10] = {50.1, 100.2, 300.3, 300.4, 150.5, 70.6, 45.7, 500.8, 100.9, 50.0};
    percentualDespesas(arrayDespesas);

    return 0;
}
