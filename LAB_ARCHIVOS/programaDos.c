// Diana Marisol Damas Coreas 00010021
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int valorInt = 0;
    int numeros ;
    int contador = 0;
    FILE *a = fopen("ejercicio2.txt", "r");

    // Es buena practica confirmar que el archivo se ha abierto correctamente
    if (a == NULL)
    {
        printf("ERROR!");
        return 1;
    }

     while (!feof(a)) {
        fscanf (a, "%d", &valorInt);
        printf ("Extraido: %d \n", valorInt);
        numeros = numeros + valorInt;
        contador = contador +1;
    }

    fclose(a);

  int promedio = numeros / contador;

  printf("Promedio. %d", promedio);


    return 0;
}