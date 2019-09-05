#include <stdio.h>
#include <stdlib.h>

void MostrarArray(int array[],int cantidad);
int RetornarMaximo(int max[],int cantidad);
void InicializarArray(int array [], int cantidad);
void cargaSecuencialArray(int array [], int cantidad, char mensaje[]);
int retornarMinimo(int min[], int cantidad);
float Dameelpromedio(int array[], int cantidad);
int ordenar(int array[], int cantidad);
int ordenarMayorMenor(int array[], int cantidad);
int main()
{
    int cantidad = 6;
    int i;
    int listadoEdades[cantidad];
    int maximo;
    int minimo;
    float promedio;

    InicializarArray(listadoEdades, cantidad);
    cargaSecuencialArray(listadoEdades, cantidad, "Ingrese su edad: ");
    MostrarArray(listadoEdades, cantidad);

     maximo = RetornarMaximo(listadoEdades, cantidad);
     printf("El maximo es: %d \n" , maximo);

     minimo = retornarMinimo(listadoEdades, cantidad);
     printf("El minimo es: %d \n", minimo);

     promedio = Dameelpromedio(listadoEdades, cantidad);
     printf("El promedio es %f \n", promedio);

     ordenar(listadoEdades, cantidad);
     MostrarArray(listadoEdades,cantidad);

     ordenarMayorMenor(listadoEdades,cantidad);
     MostrarArray(listadoEdades,cantidad);





}
void MostrarArray(int array[],int cantidad)
{
    int i;
    for(i=0; i < cantidad; i++)
    {
        printf("El array: %d \n", array[i]);
    }
    return 0;
}
int RetornarMaximo(int array[], int cantidad)
{
    int i;
    int maximo;
    for(i=0; i < cantidad; i++)
    {
        if(array [i] > maximo || i == 0)
        {
            maximo = array[i];

        }
    }
    return maximo;
}
void InicializarArray(int array[], int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        array[i];
    }

}
void cargaSecuencialArray(int array[],int cantidad, char mensaje[])
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        printf(mensaje);
        scanf("%d",&array[i]);
    }
}
int retornarMinimo(int array[], int cantidad)
{
     int i;
    int minimo;
    for(i=0; i < cantidad; i++)
    {
        if(array [i] < minimo || i == 0)
        {
            minimo = array[i];

        }
    }
    return minimo;
}
float Dameelpromedio(int array[], int cantidad)
{
    int i;

    float acumulador = 0;
    for(i = 0; i < cantidad; i++)
    {
        acumulador = acumulador + array[i];
    }

    return acumulador / cantidad;
}
int ordenar(int array[], int cantidad)
{
    int i;
    int j;
    int aux;
    for(i= 0; i < cantidad ; i++)
    {
        for(j = i+1; j < cantidad; j++)
        {
            if(array[i] > array[j])
            {
                aux = array[j];
                array[j] = array[i];
                array[i]= aux;
            }
        }
    }
    return;
}
int ordenarMayorMenor(int array[], int cantidad)
{
    int i;
    int j;
    int aux;
    for(i= 0; i < cantidad ; i++)
    {
        for(j = i+1; j < cantidad; j++)
        {
            if(array[i] < array[j])
            {
                aux = array[j];
                array[j] = array[i];
                array[i]= aux;
            }
        }
    }
    return;
}











