#include <stdio.h>
void lowercase(char *p)
{

    for(int i=0; p[i]!='\0'; i++)
    {
        if(p[i]>64&& p[i]<96)
        {
            p[i]=p[i]+32;
        }
    }

}
int main ()
{
    char ch[20]="BANGLADESH";
    lowercase(ch);
    printf("%s",ch);

}

