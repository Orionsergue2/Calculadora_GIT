#include <stdio.h>
#include <math.h>

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
