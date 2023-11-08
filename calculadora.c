#include <stdio.h>
#include <math.h>
#include "calculadora.h"
#define SIZE 10

typedef struct{
  char operacion;
  double resultado_double1;
  double resultado_double2;
  double resultado_double3;
  int resultado_int;
  int op1;
  int op2;
  int op3;
  double op1d;
  double op2d;
  double op3d;
  
}OPERACION;

void leer_arreglo(int arr[]);
int sumar_arreglo(int arreglo[]);
int factorial(int num);
double euler(int num);
int factorial_rec(int num);
void eq_cuadratica(int a, int b, int c, double *r1, double *r2);
int fibonacci(int d);
double pi(int e);
void circulo_esfera(double r, double *peri, double *area, double *vol);
void estadistica(int arr[], int size, double *media, double *mediana, double *moda);

int main(void)
{
  int a;
  int b;
  int num;
  char c;
  int numeros[10];
  int res;
  double res_e;
  double v1, v2, v3, res1, res2;
  int d;
  int e;
  double res_pi;
  double r;
  OPERACION historial[10];
  int cuenta = 0;
  int fn;

  while(1)
    {
  printf("Que operacion quieres hacer?:\n");
  scanf("%c", &c);

  //if para ver cuando el historial = 10
  
  switch(c)
    {
    case '+':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", &b);
      res = suma(a, b);
      printf("%d\n", res);
      historial[cuenta].operador = c;
      historial[cuenta].op1 = a;      
      historial[cuenta].op2 = b;
      historial[cuenta].resultado_int = res;
      
      break;
      
    }

    case '-':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", &b);
      res = resta(a, b);
      printf("%d\n", res);
      historial[cuenta].operador = c;
      historial[cuenta].op1 = a;      
      historial[cuenta].op2 = b;
      historial[cuenta].resultado_int = res;
      
      break;
    }

    case '/':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", &b);
      res = division(a, b);
      printf("%d\n", res);
      historial[cuenta].operador = c;
      historial[cuenta].op1 = a;      
      historial[cuenta].op2 = b;
      historial[cuenta].resultado_int = res;
      
      break;
    }

    case '*':
    {
      printf("Dame tu primer numero:\n");
      scanf("%d", &a);
      printf("Dame tu segundo numero:\n");
      scanf("%d", &b);
      res = multiplicacion(a, b);
      printf("%d\n", res);
      historial[cuenta].operador = c;
      historial[cuenta].op1 = a;      
      historial[cuenta].op2 = b;
      historial[cuenta].resultado_int = res;
      
      break;
    }
    
        case 'f':
    {
      printf("Dame tu numero:\n");
      scanf("%d", &num);
      res = factorial(num);
      printf("%d\n", res);
      historial[cuenta].operador = c;
      historial[cuenta].op1 = num;      
      historial[cuenta].resultado_int = res;      
      break;
    }

        case 'F':
    {
      printf("Dame tu numero:\n");
      scanf("%d", &num);
      res = factorial_rec(num);
      printf("%d\n", res);
      historial[cuenta].operador = c;
      historial[cuenta].op1 = num;      
      historial[cuenta].resultado_int = res;
      
      break;
    }
    
        case 'e':
    {
      printf("Dame tu numero:\n");
      scanf("%d", &num);
      res_e = euler(num);
      printf("%lf\n", res_e);
      historial[cuenta].operador = c;
      historial[cuenta].op1 = num;      
      historial[cuenta].resultado_double = res;
      
      break;
    }

    case 'c':
      {
	printf("Dame tu variable a para calcular la eq cuadratica:\n");
	scanf("%lf", &v1);

	printf("Dame tu variable b:\n");
	scanf("%lf", &v2);

	printf("Dame tu variable c:\n");
	scanf("%lf", &v3);
	
	eq_cuadratica(v1, v2, v3, &res1, &res2);
	printf("Tus resultados son %lf y %lf\n", res1, res2);
      historial[cuenta].operador = c;
      historial[cuenta].op1d = num;
      historial[cuenta].op2d = num;
      historial[cuenta].op3d = num;      
      historial[cuenta].resultado_double = res1;
      historial[cuenta].resultado_double = res2;      
        break;
      }
     case 'i':
      {
	printf("Dame un número:\n");
        scanf("%d", &d);

     while (d < 0)
    {
        printf("El número debe ser positivo. Inténtelo de nuevo:\n");
        scanf("%d", &d);
    }



	fn = fibonacci(d);
      historial[cuenta].operador = c;
      historial[cuenta].op1 = d;      
      historial[cuenta].resultado_int = fn;

      
        break;
      }
     case 'p':
      {
        printf("Dame la cantidad de términos a utilizar:\n");
        scanf("%d", &e);

	while(e % 2 == 0)
	  {
        printf("El número no debe de ser par:\n");
        scanf("%d", &e);
	  }
	  
	  res_pi = pi(e);
	  
          printf("Tu aprox de pi es: %lf\n", res_pi); 
      historial[cuenta].operador = c;
      historial[cuenta].op1 = e;      
      historial[cuenta].resultado_int = res_pi;
      
        break;
      }
           case 'v':
      {
	
        printf("Dame tu radio para calcular el perimetro del circulo, area del circulo y volumen del circulo:\n");

        scanf("%lf", &r);

	circulo_esfera(r, &v1, &v2, &v3);

	printf("Tus resultados son perimetro = %lf area = %lf volumen = %lf\n", v1, v2, v3);
	
        break;
      }
           case 'm':
      {
      historial[cuenta].operador = c;
      historial[cuenta].op1d = r;      
      historial[cuenta].resultado_double1 = v1;
      historial[cuenta].resultado_double2 = v2;
      historial[cuenta].resultado_double3 = v3;      
        break;
      }      
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

int factorial(int num)
{

  int a;
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
  double res;
  double repeticion;
  int i;

  for(i = num; i >= 0; i--)
    {
      repeticion = (double)factorial(i);
      res = res+1/repeticion;
      
    }
  return res;
  
}

void eq_cuadratica(int a, int b, int c, double *r1, double *r2)
{
  *r1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
  *r2 = (-b - sqrt(b * b- 4* a* c))/(2 * a);   
    }

int fibonacci(int d)
{
    int fn0 = 0;
    int fn1 = 1;
    int fn;
    int fibo;
    int impresion;

    if(d == 0)
      {
	printf("0\n");
      }

    // Bucle que genera la secuencia de Fibonacci
    for (fibo = 0; fibo < d; fibo++)
    {
        printf("0");

        for (impresion = 0; impresion  <= fibo; impresion++)
        {
            if (impresion == 0)
            {
                printf("1");
            }
            else
            {
                fn = fn0 + fn1;
                printf("%d", fn);
                fn0 = fn1;
                fn1 = fn;
            }
        }

        printf("\n");
        fn0 = 0;
        fn1 = 1;
    }
    return fn;
}

double pi(int e)
{
  double pi = 0.0;
  int i;
  double termino;

  for(i = 0; i < e; i++)
    {
      termino = 1.0 /(2 * i +1);
      if(i % 2 == 0)
	{
         pi += termino;
	}
      else
	{
         pi -= termino;
	}
    }
  
  return pi *= 4.0;
 
}

void circulo_esfera(double r, double *peri, double *area, double *vol)
{
  int e;
  double res_pi;
  
        printf("¿Que ran preciso quieres tu calculo? (1-9999):\n");
        scanf("%d", &e);
	
	while(e % 2 == 0)
	  {
        printf("El número no debe de ser par:\n");
        scanf("%d", &e);
	  }

	res_pi = pi(e);

	*area = r * r * res_pi;
	*peri = res_pi *2 * r;
	*vol = (4/3) * res_pi * (r * r * r);

	
}

void estadistica(int arr[], int size, double *media, double *mediana, double *moda)
{
  
}
