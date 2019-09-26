#include <stdio.h>
#include <stdlib.h>
#include "Estacionamiento.h"
#define A 4
int main()
{
    sPersona ListadoP[4];
    harcodearDatos(ListadoP, 4);
    mostrarDatos(ListadoP,4);
    printf("\n Estacionamiento! \n");
    return 0;
}
