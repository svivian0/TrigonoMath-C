#include "pitagoras.h"
#include "oprbasics.h"
#include <stddef.h>
#include <stdio.h>


int pitagoras(double b, double c, double *result){


    if (result == NULL || b < 0.0 || c < 0.0) {
        return 0;
    }

    double a_squared = sum(multiply(b, b), multiply(c, c));
    double a;
    sqrroot(a_squared, &a);

    *result = a;

    return 1;
}
