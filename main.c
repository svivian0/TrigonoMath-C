#include <stdio.h>
#include "src/oprbasics.h"
#include "src/pitagoras.h"

// gcc -Wall -Wextra -std=c11 main.c src/oprbasics.c src/pitagoras.c -o trigonometry

int main()
{
    double result;
    pitagoras(3.0,4.0, &result);
    printf("O resultado é: %.2f\n", result);
    return 0;

}