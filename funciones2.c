#include <stdio.h>
#include "funciones2.h"

void leerNombre(char nombre[]){
    printf("Ingrese el nombre: ");
    scanf("%s",nombre);
}

void leerDireccionTelefono(char direccion[], char telefono[]){
    printf("Ingrese el la direccion: ");
    scanf("%s",direccion);
    printf("Ingrese el telefono: ");
    scanf("%s",telefono);
}

void leerEdadExpHijos(int *edad, int *exp, int *hijos){
    printf("Ingrese la edad: ");
    scanf("%d",edad);
    printf("Ingrese los años de experiencia: ");
    scanf("%d",exp);
    printf("Ingrese el numero de hijos: ");
    scanf("%d",hijos);
}

void imprimirDatos(char nombre[], char direccion[], char telefono[],
                    int *edad, int *exp, int *hijos){
    printf("El nombre es: %s\n",nombre);
    printf("La direccion es %s\n",direccion);
    printf("EL telefono es: %s\n",telefono);
    printf("La edad es: %d\nLa experiencia es: %d\nEl numero de hijos es: %d\n",*edad,*exp,*hijos);
}