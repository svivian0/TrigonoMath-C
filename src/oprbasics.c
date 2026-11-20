#include <stdio.h>
#include <stddef.h>

double sum(double a, double b){

    return a + b;
}

double minus(double a, double b){

    return a - b;
}

double multiply(double a, double b){

    return a * b;
}

int divide(double a, double b, double *result){

    if (b == 0 || result == NULL){
        printf("Error: Division by zero\n");
        return 0;
    }

    *result = a / b;
    return 1;
}

double power(double a, double b){
    double x = 1;
    for (int i = 0; i < b; i++){
        x *= a;
    }
    return x;
}

int main(){
    double result = power(2, 3);
    printf("%.2f", result);
    return 0;
}
