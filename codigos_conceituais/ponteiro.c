#include <stdio.h>

typedef struct
{
  int hora, min, seg;
} time;

void mostraTime(time t)
{
  printf("%dh %dm %ds", t.hora, t.min, t.seg);
}

void leTime(time *t)
{
  printf("Informe a Hora: ");
  scanf("%d", &t->hora);
  printf("Informe o Minuto: ");
  scanf("%d", &t->min);
  printf("Informe a Segundos: ");
  scanf("%d", &t->seg);
  printf("Na funcao: ");
  mostraTime(*t);
  printf("\n");
}

int main()
{
  time t;
  leTime(&t);
  printf("No main: ");
  mostraTime(t);
  printf("\n");
}
