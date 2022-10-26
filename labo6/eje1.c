// Diana Marisol Damas Coreas 00010021
#include <stdio.h>
int main()
{
    char texto[1000];
    char letras[1000];

    printf("Ingrese el texto a evaluar: ");
    fgets(texto, sizeof(texto), stdin); // read string
    //printf("Texto: ");
    printf("Ingrese combinacion de letras: ");
    fgets(letras, sizeof(letras), stdin); // read string
    

    if (strstr(texto,letras) == NULL) {
        printf("NO ESTA ");

    } else{
        printf("SI ESTA ");

    }
    return 0;
}