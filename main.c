#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

   float n1=400,n2=700;
   //float *numero1=&n1, *numero2=&n2;
   float *sum=malloc(sizeof(float));
   float *rest=malloc(sizeof(float));
   float *mult=malloc(sizeof(float));
   float *div=malloc(sizeof(float));
   //leerDatos(numero1,numero2);
   operaciones(sum,rest,mult,div,&n1,&n2);
   printf("La suma es: %f\n",*sum);
   printf("La rest es: %f\n",*rest);
   printf("La division es: %f\n",*div);
   printf("La multiplicacion es: %f\n",*mult);



    return 0;
}