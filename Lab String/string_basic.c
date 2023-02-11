#include <stdio.h>
#include <string.h>
int main ()
{
    char capital[]="Dhaka";
    printf("%s",capital);
    printf("\n");

    int i=0;
    while (i<5)
    {
        printf("%c", capital[i]);
        i++;
    }

    printf("\n");
    for(i=0; i<5; i++)
    {
        printf("%c",capital[i]);
    }
    printf("\n");



}








