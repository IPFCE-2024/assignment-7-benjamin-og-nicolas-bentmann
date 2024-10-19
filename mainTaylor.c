#include "taylor_sine.h"
#include <stdio.h>
#include <math.h>

/*
Vores main program, som tester vores sin funktion.
Samtidig sammenligner den også med math.h egen udgave
af samme beregning. Jo større vores n variabel er, desto mere
præcis er vores statement. Altså jo tættere kommer svaret på
math.h svar.
*/

/*
It seems that for cases where n is smaller than x, the output of taylor_sine is always incorrect. It also seems 
that in cases where n is larger than x, but the two values are close in size, the output of our function 
isnt very precise. Only for cases where n is significantly larger than x, is our function precise.
*/

  int main() {
    int n = 3; 
    double x = 1;
    double svar = taylor_sine(x, n);

    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));

    n = 100;
    x = 1;
    svar = taylor_sine(x, n);

    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));


    n = 3;
    x = 4;
    svar = taylor_sine(x, n);

    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));


    n = 4;
    x = 7;
    svar = taylor_sine(x, n);

    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));


    n = 10;
    x = 9;
    svar = taylor_sine(x, n);

    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));

    return 0;
}