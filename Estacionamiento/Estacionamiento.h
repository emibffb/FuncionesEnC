#include <stdio.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int anio;

} sFecha;
typedef struct
{

    int id;
    char nombre[50];
    sFecha FechaNac;


} sPersona;
typedef struct
{

    char patente[50]
    sFecha fechaIngreso;
    int horaIngreso;
    int horaSalida;
    int iDuenio;


} sVehiculo;
void harcodearDatos(sPersona ListaPersonas[], int cant);
void mostrarDatos(sPersona ListaPersonas[], int cant);
void harcodearVehiculos(sVehiculo Vehiculos[], int cant);
void mostrarVehiculos(sPersona ListaPersonas[], sVehiculo Vehiculos, int cant);
int buscarIndicePersona(sPerona ListaPersonas[], int cant, int id);

