// Diana Marisol Damas Coreas 00010021
#include <stdio.h>
#include <string.h>
            
         
char palin[40];
int longitud;
int inicio=0,fin;
         
main()
{
       
    printf("\nIngrese una palabra:\n\n");
    gets(palin);


    longitud=strlen(palin);

    for(fin=longitud-1; palin[fin]==palin[inicio] && fin>=0; inicio++,fin--);

    if(inicio==longitud){
        printf("\nEs un palindromo");
      }else{
        printf ("\nNo es palindromo");
    } 
         
}