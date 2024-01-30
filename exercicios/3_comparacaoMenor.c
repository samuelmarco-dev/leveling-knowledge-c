#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LENGTH 8

int menorQueMedia(int nums[], int N) {
    float media = 0;
    int soma = 0;

    for(int i = 0; i < N; i++){
        soma += nums[i];
    }
    media = soma/N;

    return qtdValoresMenorMedia(media, nums, N);
}

int qtdValoresMenorMedia(float media, int nums[], int N) {
    int aux = 0;

    for(int i = 0; i < N; i++){
        if(nums[i] < media) aux++;
    }

    return aux;
}

int main() {
    setlocale(LC_ALL, "");

    int arrayInteiros[8] = {2, 3, 5, 7, 9, 10, 12, 15};
    int menores = menorQueMedia(arrayInteiros, 8);

    printf("%d numeros são menores que a media", menores);
    return 0;
}
