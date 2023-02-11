#include <stdio.h>
int main ()
{
    int x,a[5],*p,sum=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&x);
        a[i]=x;
    }
    p=a;
    //printf("%d\n",p);
    for(int i=0; i<5; i++)
    {
        sum+=p[i];//
    }
    printf("%d ",sum);
    /*int a[5],x,sum=0;
    for(int i=1;i<=5;i++){
        scanf("%d",&x);//
        a[i]=x;
    }
    for(int i=1;i<=5;i++){
       sum=sum+a[i];
    }
    printf("Summation of the array elements: %d ",sum);*/





}
