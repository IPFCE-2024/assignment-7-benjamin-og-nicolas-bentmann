#include "taylor_sine.h"
#include <stdio.h>

double taylor_sine(double x, int n) {
  double up = x; // Første step i sinus funktionen.
  double down = 1; // Starter ved 1 fakultet.
  double fak = 2;
  double result = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i%2 == 1) // Finder ud af om der er en rest eller ej, for at afgøre positiv eller negativt fortegn.
    {
      result += up / down;
    }
    else
    {
      result -= up / down;
    }
    up = up * (x * x);
  
    down = down * fak * (fak + 1);
    
    fak = fak + 2;
  }
  return result;
}