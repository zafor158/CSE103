#include <stdio.h>
void uppercase(char *p)
{

    for(int i=0; p[i]!='\0'; i++)
    {
        if(p[i]>96 && p[i]<124)
        {
            p[i]=p[i]-32;
        }
}
}
int main ()
{

    char ch[20]="bangladesh";
    uppercase(ch);
    printf("%s",ch);
}
