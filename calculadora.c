#include <stdio.h>

void leer_arreglo(int arr[]);
int sumar_arreglo(int arreglo[]);
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);

int main(void)
{
  int a;
  int b;
  int numeros[10];
  int res;

  leer_arreglo(numeros);
  res = sumar_arreglo(numeros);

  printf("%d\n", res);
  return 0;
}

void leer arreglo(int arr[])
{
  int i;

  for(i = 0; i < 10; i++)
    {
      printf("Dame 10 numeros\n"),
	scanf("%i", &arr[i]);
    }
}

int sumar_arreglo(int arreglo[])
{
  int i;
  int res = 0;
  for(i = 0; i < 10; i++)
    {
      res = res + arreglo[i];
    }
  return res
    }

