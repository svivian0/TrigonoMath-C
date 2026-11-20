#ifndef OPRBASICS_H
#define OPRBASICS_H

double sum(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);

/* Return 1 on success and 0 on invalid input. */
int divide(double a, double b, double *result);
int power(double base, int exponent, double *result);

#endif
