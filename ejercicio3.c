#include <stdio.h>
// Luis Francisco Mejía Duran 00379522
int main(){
    int num = 2;

    int n, i = 1;

    printf ("ingresar un numero:  ");

    scanf ("%d", &n);

    for (i; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, n, n * n);

    }


    return 0;

}