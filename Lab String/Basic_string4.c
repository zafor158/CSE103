#include <stdio.h>
int main ()
{
    char str1[]="Hello";
    char *p1="World";
    char *p2;
    printf("\n");
    printf ("%s", str1);//Hello
    printf("\n");
    printf ("%s", *p1);//world
    printf("\n");
    p2=str1;
    printf ("%s", p2);//Hello
    printf("\n");
    p2=p1;
    printf ("%s", p2);//world
}




