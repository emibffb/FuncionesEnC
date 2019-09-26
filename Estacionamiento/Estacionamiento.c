#include "Estacionamiento.h"

void hardcodearDatos(sPersona ListaPersonas[], int cant)

{


    int dias []={33,22,25,11};
    int meses[]={3,4,12,11};
    int anios[]= {1990,1980,2000,1995};
    char nombres[][50]= {"Maria","Ezequiel","German","Yanina"};
    int i;

    for(i=0; i<cant; i++)
    {
        ListaPersonas[i].FechaNac.anio= anios[i];
        ListaPersonas[i].FechaNac.dia = dias [i];
        ListaPersonas[i].FechaNac.mes = meses[i];
        strcpy(ListaPersonas[i].nombre,nombres[i]);
        ListaPersonas[i].id = i+1;

    }


    }
    void mostrarDatos(sPersona ListaPersonas[], int cant)
    {
        int i;
        for(i = 0 ; i< cant; i++)
        {
                printf("Nombre: %s \t", ListaPersonas[i].nombre);
                printf("Dia: %d \t", ListaPersonas[i].FechaNac.dia);
                printf("Mes: %d \t", ListaPersonas[i].FechaNac.mes);
                printf("Año: %d \t", ListaPersonas[i].FechaNac.anio);

        }
    }
    void harcodearVehiculos(sVehiculo Vehiculos[], int cant)
    {
       int i;
       char patentes[][50] = {"AAA111","BBB222","AA111BB","DJ222BB"};
       int horaIngresos[] = {10,9,8,11};
       int horaSalidas[]= {11,11,11,12};
       for(i=0; i<cant; i++)
    {
        Vehiculos[i].fechaIngreso.dia = dias[i];
        Vehiculos[i].fechaIngreso.mes = meses[i];
        Vehiculos[i].fechaIngreso.anio = anios[i];
        Vehiculos[i].horaIngreso = horaIngresos [i];
        Vehiculos[i].horaSalida =horaSalidas [i];
       strcpy(Vehiculos[i].patente,patentes[i]);




    }

    }
    mostrarVehiculos(sPersona ListaPersonas[], sVehiculo Vehiculos, int cant)
    {
        int i;
        for(i = 0; i < cantidad; i++);
        {
            printf(" \n Nombre : s \t",ListaPersonas[buscarIndicePersona(ListaPersonas, cant, sVehiculo[i],iDuenio]);
            printf("Día : %d \t", sVehiculo[i].fechaIngreso.dia);
            printf("mes : %d \t", sVehiculo[i].fechaIngreso.mes);
            printf("año : %d \t", sVehiculo[i].fechaIngreso.anio);
            printf("Hora Ingreso : %d \t", sVehiculo[i].horaIngreso);
            printf("Hora salida : %d \t", sVehiculo[i].horaSalida.dia);
            printf("Patente: %d \t", sVehiculo[i].patente);

        }
    }
    int buscarIndicePersona(sPersona ListadoPersonas[], int cant, int id)
    {
        int i;
        for(i = 0 ; i < cant; i++)
        {
            if(id == ListadoPersonas[i].id)
            {
                return i;
            }
            return -1;
        }
    }
