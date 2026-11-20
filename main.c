#include <stdio.h>
#include "src/oprbasics.h"

int main(void)
{
    double result;

    if (divide(10.0, 2.0, &result)) {
        printf("10 / 2 = %.2f\n", result);
    } else {
        printf("Erro: não foi possível dividir.\n");
        return 1;
    }

    if (power(2.0, -3, &result)) {
        printf("2 ^ -3 = %.3f\n", result);
    } else {
        printf("Erro: expoente inválido para a base informada.\n");
        return 1;
    }

    return 0;
}
