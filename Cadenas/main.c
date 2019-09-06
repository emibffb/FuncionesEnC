#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


int main()

{

    /*
    strlen: el largo de la palabra
    strcpy.
    strupr:
    strlwr:
    strcmp:
    stricmp:
    strcat: SIRVE PARA CONCATENAR.


    */
     /*   char palabra[10];
        char palabra2[10];
        char todo[50];
        int lenght;
        int comp;
        printf("Ingrese una palara: ");


fgets(palabra, 10, stdin);
        gets(palabra);

        strcpy(palabra2, "perro");

strlwr(palabra);
printf("La palabra es: %s y largo: %d \n", palabra, lenght);
printf("La palabra dos es: %s \n", palabra2);

            COMPARAR DOS STRINGS
        if(stricmp(palabra, palabra2) == 0)
        {
            printf("Son iguales \n");
        }
        else
        {
            printf("No son iguales \n");
        }
        strcat(todo, palabra);
        strcat(todo, palabra2);
        strcat(todo, "chau");

        printf("TODO:  %s", todo);

        return 0; */

        char nombre[15];
        char apellido[15];
        char NombreApellido[50];
        int i;

        int lenght;

    printf("Ingrese nombre: ");
    gets(nombre);
    printf("Ingrese apellido: ");
    gets(apellido);

    for(i = 0; i < 15 ; i++)
   {
    strcpy(NombreApellido, nombre);
    stricmp(nombre , apellido);
    strcat(NombreApellido, ", ");
    strcat(NombreApellido, apellido);


   }
   printf("Nombre y apellido: %s ", NombreApellido);



}
