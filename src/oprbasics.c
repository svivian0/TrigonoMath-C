#include "oprbasics.h"
#include <stddef.h>
#include <stdio.h>

double sum(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

int divide(double a, double b, double *result)
{
    if (result == NULL || b == 0.0) {
        return 0;
    }

    *result = a / b;
    return 1;
}

int power(double base, int exponent, double *result)
{
    if (result == NULL || (base == 0.0 && exponent < 0)) {
        return 0;
    }

    unsigned int remaining;
    if (exponent < 0) {
        remaining = (unsigned int)(-(exponent + 1)) + 1u; // Transforma o número negatico em um sem unidade, está escrito dessa forma para permitir que o INT_MIN também consiga ser convertido
    } else {
        remaining = (unsigned int)exponent;
    }

    double value = 1.0;

    for (int i = 0; i < exponent; i++) {
    value *= base;}

    *result= value;
    return 1;
}

int main(){
    double result;
    power(2, 3, &result);
    printf("%f", result);
    return 0;
}