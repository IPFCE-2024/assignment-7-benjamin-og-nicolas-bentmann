#include "taylor_sine.h"
#include <stdio.h>
#include <math.h>

/*Vores main program, som tester vores sin funktion.
Samtidig sammenligner den også med math.h egen udgave
af samme beregning. Jo større vores n variabel er, desto mere
præcis er vores statement. Altså jo tættere kommer svaret på
math.h svar.

Vi har fastholdt n = 20, som vores præcition.
Dermed jo større x bliver, desto mere upræcis er vores sinus funktion.

*/

  int main() {
    int n = 20; // Vores præcition.

    double x = 6;
    double svar = taylor_sine(x, n);


    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));


    x = 18;
    svar = taylor_sine(x, n);

    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));


    x = 3;
    svar = taylor_sine(x, n);

    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));


    x = 9;
    svar = taylor_sine(x, n);

    printf("Svaret er: %lf ", svar);
    printf("sin = %f\n", sin(x));

    return 0;
}