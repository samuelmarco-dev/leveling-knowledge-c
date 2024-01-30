#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  int hora, min, seg;
} time;

void mostraTime(time t)
{
  printf("%dh %dm %ds", t.hora, t.min, t.seg);
}

time *criaTime(int hora, int min, int seg)
{
  time *t = (time *)malloc(sizeof(time));

  if (hora < 0 || hora > 24)
    return NULL;
  if (min < 0 || min > 60)
    return NULL;
  if (seg < 0 || seg > 60)
    return NULL;

  t->hora = hora;
  t->min = min;
  t->seg = seg;

  return t;
}

time *leTime()
{
  int hora, min, seg;
  time *t;
  do
  {
    printf("Informe a Hora: ");
    scanf("%d", &hora);
    printf("Informe o Minuto: ");
    scanf("%d", &min);
    printf("Informe a Segundos: ");
    scanf("%d", &seg);
    t = criaTime(hora, min, seg);
  } while (t == NULL);
  return t;
}

int main()
{
  time *t, *t1;

  t1 = criaTime(21, 55, 12);
  t = leTime();
  mostraTime(*t);
  printf("\n");
  mostraTime(*t1);
  printf("\n");
}
