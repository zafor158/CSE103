#include <stdio.h>
int main ()
{
    float a[10];
    float b;
    float temp=0;
    for(int i=1; i<=10; i++)
    {
        scanf("%f",&b);
        a[i]=b;
    }
    for(int i=1; i<=10; i++)
    {
       for(int j=i+1;j<=10;j++){
         if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       }
    }
    for(int i=1; i<=10; i++)
    {
        printf(".2%f ",a[i]);
    }




}
