// Diana Marisol Damas Coreas 00010021
#include <stdio.h>
#include <string.h>

// Definición
int contarVocales(char *cadena, char vocalMayuscula, char vocalMinuscula);

int main()
{

#define MAX_STRING_SIZE 70

    FILE *ejercicio3;
    char *token;
    int vocales = 0;

    char arr[][MAX_STRING_SIZE] =
        {"primera linea",
         "segunda estacion clara",
         "prmera segunda inteligente oracion",
         "prmera segunda inteligente obtuso",
         "prmera segunda inteligente cuarta uruguay"};

    ejercicio3 = fopen("ejercicio3.txt", "w");

    int longitudDelArreglo = sizeof(arr) / sizeof(arr[0]);
    for (int x = 0; x < longitudDelArreglo; x++)
    {

        if (x == 0)
        {
            // primera linea LETRA A
            token = strtok(arr[x], " ");
            printf(" %s \n", token);
            vocales = contarVocales(token, 'a', 'A');
            fprintf(ejercicio3, "Numeros de vocales a: %d \n", vocales);
        }
        else if (x == 1)
        {
            // segunda linea LETRA E
            token = strtok(arr[x], " ");

            for (int i = 0; i < 1; i++)
            {

                token = strtok(NULL, " ");
            }
            printf("%s \n", token);
            vocales = contarVocales(token, 'e', 'E');
            fprintf(ejercicio3, "Numeros de vocales e: %d \n", vocales);
        }
        else if (x == 2)
        {
            // tercera linea LETRA I
            token = strtok(arr[x], " ");

            for (int i = 0; i < 2; i++)
            {

                token = strtok(NULL, " ");
            }
            printf(" %s \n", token);
            vocales = contarVocales(token, 'i', 'I');
            fprintf(ejercicio3, "Numeros de vocales i: %d \n", vocales);
        }
        else if (x == 3)
        {
            // cuarta linea LETRA O
            token = strtok(arr[x], " ");

            for (int i = 0; i < 3; i++)
            {

                token = strtok(NULL, " ");
            }
            printf(" %s \n", token);
            vocales = contarVocales(token, 'o', 'O');
            fprintf(ejercicio3, "Numeros de vocales o: %d \n", vocales);
        }
        else if (x == 4)
        {
            // quinta linea LETRA U
            token = strtok(arr[x], " ");

            for (int i = 0; i < 4; i++)
            {

                token = strtok(NULL, " ");
            }
            printf(" %s \n", token);
            vocales = contarVocales(token, 'u', 'U');
            fprintf(ejercicio3, "Numeros de vocales u: %d \n", vocales);
        }
        else
        {
            // statement(s)
            return 0;
        }
    }
}

// Cuerpo de la función
int contarVocales(char *cadena, char vocalMayuscula, char vocalMinuscula)
{
    int vocales = 0;

    // Recorrer toda la cadena
    for (int indice = 0; cadena[indice] != '\0'; ++indice)
    {

        char letraActual = cadena[indice];

        if (
            letraActual == vocalMayuscula || letraActual == vocalMinuscula)
        {
            vocales++;
        }
    }
    return vocales;
}