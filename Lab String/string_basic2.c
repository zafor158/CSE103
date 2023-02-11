
#include <stdio.h>
void main()
{

    char capital[]="Dhaka", *p;

    p = &capital[4];

    while (*p != '\0')
    {

        printf("%c", *p);


        p--;

    }

}
