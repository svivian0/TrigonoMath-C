#include "oprbasics.h"
#include <stddef.h>

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
        remaining = (unsigned int)(-(exponent + 1)) + 1u;
    } else {
        remaining = (unsigned int)exponent;
    }

    double value = 1.0;
    double factor = base;

    while (remaining > 0u) {
        if (remaining % 2u == 1u) {
            value *= factor;
        }
        factor *= factor;
        remaining /= 2u;
    }

    if (exponent < 0) {
        value = 1.0 / value;
    }

    *result = value;
    return 1;
}
