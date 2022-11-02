// Diana Marisol Damas Coreas 00010021
#include <stdio.h>
int main()
{
    // DEFINIR ARREGLO , SE LLAMA NUMEROS ES DE TIPO INT CON 20 ELEMENTOS
    FILE *archivoPositivos;
    FILE *archivoNegativos;

    int cantidad;
    printf("Introduce la cantidad de números que deseas guardar:\n");
    scanf("%d", &cantidad);
    int orden[cantidad];
    int numero;

    archivoPositivos = fopen("ejercicio1_positivos.txt", "w");
    archivoNegativos = fopen("ejercicio1_negativos.txt", "w");

    for (int i = 0; i < cantidad; i++)
    {
        scanf("%d", &numero);
        orden[i] = numero;
    }


    for (int i = 0; i < cantidad; i++)
    {

        if (orden[i] >= 0)
        {

            fprintf(archivoPositivos, "%d", orden[i]);
            fprintf(archivoPositivos, "\n");
        }
        else
        {
            fprintf(archivoNegativos, "%d", orden[i]);
            fprintf(archivoNegativos, "\n");
        }
    }

    fclose(archivoPositivos);
    fclose(archivoNegativos);

    return 0;
}