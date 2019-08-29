#include <stdio.h>
#include <stdlib.h>
void saludar();
void calcular(int uno, int dos, int operacion);

float sumar(int uno, int dos);
float restar(int uno, int dos);
float multiplicar(int uno, int dos);
float dividir(int uno, int dos);
void mostrar(float);
int pedirDato();

int main()
{
    printf("Ingrese una operación desea hacer: \n 1- Sumar \n 2 - Restar \n 3-Multiplicar \n 4- Dividir");
    int operacion = pedirDato();
    printf("Ingrese el primer numero");
    int uno = pedirDato();
    printf("Ingrese el segundo numero");
    int dos = pedirDato();
    calcular(uno,dos,operacion);




}
void saludar()
{
    printf("Boca la concha tu madre!\n");

}
void calcular(int uno, int dos, int operacion)
{
    float resultado;
    switch(operacion)
    {
        case 1:
            resultado = sumar(uno,dos);
            break;

        case 2:
            resultado = restar(uno,dos);
            break;

        case 3:
            resultado = multiplicar(uno,dos);
            break;

        case 4:
            resultado = dividir(uno,dos);
            break;

    }
    mostrar(resultado);
}
    float sumar(int uno, int dos)
    {
        return uno + dos;
    }
    float restar(int uno, int dos)
    {
        return uno - dos;
    }
    float multiplicar(int uno,int dos)
    {
        return uno * dos;
    }
    float dividir(int uno,int dos)
    {
    return uno / dos;
    }
    void mostrar(float resultado)
    {
        printf("El resultado es: %f \n",resultado);
    }

int pedirDato()
{
    int lala;
    scanf("%d",&lala);
    return lala;
}
