#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void leerDatos(float *num1, float *num2){
    printf("Ingrese el numero 1: ");
    scanf("%f",num1);
    printf("Ingrese el numero 2: ");
    scanf("%f",num2);
}

void operaciones(float *s, float *r, float *m, float *d, float *n1, float *n2){
    *s=*n1 + *n2;
    *r = *n1 - *n2;
    *m = *n1 * *n2;
    *d = *n1 / *n2;
}