#include <stdio.h>
int main ()
{
    int a[5];
    for(int i=1; i<=5; i++)
    {
        scanf("%d",&a[i]);// 6 2 1 8 9
    }
    int max=a[1];//6
    int min=a[1];//6
    for(int i=1; i<=5; i++)
    {
        if(max<a[2])
        {
            max=a[i];//9
        }
        else if(min>a[i])
        {
            min=a[i];//1
        }
    }
    printf("Maximum: %d\nMinimum :%d",max,min);
}
