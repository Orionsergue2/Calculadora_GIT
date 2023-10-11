#include <stdio.h>


void leer_arreglo(int arr[]);
int sumar_arreglo(int arreglo[]);
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
double division(int a, int b);
int factorial(int num);
double euler(int num);
int factorial_rec(int num);

int main(void)
{
  int a;
  int b;
  int num;
  char c;
  int numeros[10];
  int res;

  printf("Que operacion quieres hacer?:\n");
  scanf("%c", &c);
  switch(c)
    {
    case '+':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", &b);
      res = suma(a, b);
      printf("%d", res);
      break;
      
    }

    case '-':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", &b);
      res = resta(a, b);
      printf("%d", res);
      break;
    }

    case '/':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", &b);
      res = division(a, b);
      printf("%d", res);
      break;
    }

    case '*':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", &b);
      res = multiplicacion(a, b);
      printf("%d", res);
      break;
    }
    
        case 'f':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      res = factorial(num);
      printf("%d", res);
      break;
    }

        case 'F':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      res = factorial_rec(num);
      printf("%d", res);
      break;
    }
    
        case 'e':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      res = euler(num);
      printf("%d", res);
      break;
    }
    }

  return 0;
}

/*
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
  return res;
    }
*/

int suma(int a, int b)
{
  int res;

  res = a + b;
  return res;
}

int resta(int a, int b)
{
  int res;

  res = a - b;
  return res;
}

int multiplicacion(int a, int b)
{
  int res;

  res = a * b;
  return res;
}

double division(int a, int b)
{
  double res;
  double double_a;
  double double_b;
  double_a = (double) a;
  double_b = (double) b;
  res = double_a / double_b;
  return res;
}

int factorial(int num)
{

  int a = 0;
  int res = 1;

  
    for(a = 1; a <= num; a++)
      {
	res = a*res;
	
      }
    return res; 
}

int factorial_rec(int num)
{
  int res;
  if(num == 0)
    {
      return 1;
    }
  else
    {
      res = factorial_rec(num -1);
      return num * res;
    }
}

double euler(int num)
{
  double res = 0;
  double repeticion;
  int i = 0;

  for(i = num; i >= 0; i--)
    {
      repeticion = (double)factorial(i);
      res = res+1/repeticion;
      
    }
  return res;
  
}

