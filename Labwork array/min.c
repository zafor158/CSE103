#include <stdio.h>
int main ()
{
    int n1,n2,n3,min;
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2)
    {
        min = n2;
    }
    else
    {
        min =n1;
    }

    if(min>n3)
    {
        min=n3;
    }
    else
    {
        min = min;
    }
    printf("%d ",min);

}
