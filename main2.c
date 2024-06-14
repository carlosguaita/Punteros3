#include <stdio.h>
#include "funciones2.h"

int main (int argc, char *argv[]) {
    
    char nombre[20], direccion[50], telefono[30];
    int e,x,n;
    int *edad=&e,*experiencia=&x,*numHijos=&n;
    leerNombre(nombre);
    leerDireccionTelefono(direccion,telefono);
    leerEdadExpHijos(edad,experiencia,numHijos);
    imprimirDatos(nombre,direccion,telefono,edad,experiencia,numHijos);    
    
    return 0;
}