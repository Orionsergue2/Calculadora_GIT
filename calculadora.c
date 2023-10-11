#include <stdio.h>
#DEFINE NUMEROS 10 

void leer_arreglo(int arr[]);
int sumar_arreglo(int arreglo[]);
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
double division(int a, int b);

int main(void)
{
  int a;
  int b;
  int numeros[NUMEROS];
  int res;

  printf("Que operacion quieres hacer '+, -, /, *'?:\n");
  scanf("%c", c);
  switch(c)
    {
    case '+';
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", b);
      res = suma(a, b);
      printf("%d", res);
      
    }

    case '-';
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", b);
      res = resta(a, b);
      printf("%d", res);
    }

    case '/';
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", b);
      res = division(a, b);
      printf("%d", res);
    }

    case '*';
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", b);
      res = multiplicacion(a, b);
      printf("%d", res);
    }
    

    }

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

int suma(int a, int b)
{
  int res;

  res = a + b;
  return res;
}

int resta(int a, int b);
{
  int res;

  res = a - b;
  return res;
}

int multiplicacion(int a, int b);
{
  int res;

  res = a * b;
  return res;
}

double division(int a, int b);
{
  int res;

  res = a / b;
  return res;
}
