#include <stdio.h>
#include <stdlib.h>

int pesoNota(float nota, int peso) {
    if (peso == 0) return nota;
    else return nota*peso;
}

char notaFinal(float n1, float n2, float n3) {
    float notaFinal = pesoNota(n1, 2) + pesoNota(n2, 3) + pesoNota(n3, 5);

    int conceitoA = notaFinal >= 8.5;
    int conceitoB = notaFinal >= 7 && notaFinal < 8.5;
    int conceitoC = notaFinal >= 6 && notaFinal < 7;

    if(conceitoA) return 'A';
    if(conceitoB) return 'B';
    if(conceitoC) return 'C';
    
    return 'D';
}

int main() {
    float n1 = 5; 
    float n2 = 9;
    float n3 = 8;
    char conceitoAluno = notaFinal(n1, n2, n3);

    printf("Nota 1 %f\n", n1);
    printf("Nota 2 %f\n", n2);
    printf("Nota 3 %f\n", n3);

    printf("O conceito obtido pelo aluno foi: %c", conceitoAluno);
    return 0;
}
