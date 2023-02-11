#include <stdio.h>
int main ()
{
    int a[5],c1=0,c2=0,c3=0,c4=0,c5=0;
    for(int i=1; i<=5; i++)
    {
        scanf("%d",&a[i]);
         // a[5]={1,-1,2,-2,3} positive=3,negative=2
         if(a[i]>0)
        {
            c1++;//1,2,3
            if(a[i]%2==0)
            {
                c4++;
            }
            else
            {
                c5++;
            }
        }
        else if(a[i]<0)
        {
            c2++;//1,2
        }
        else if(a[i]==0)
        {
            c3++;//0
        }


    }
    /*for(int i=1; i<=5; i++)
    {
        if(a[i]>0)
        {
            c1++;//1,2,3
        }
        else if(a[i]<0)
        {
            c2++;//1,2
        }
        else if(a[i]==0)
        {
            c3++;//0
        }

    }


    for(int i=1; i<=5; i++)
    {
        if(a[i]>0)
        {
            if(a[i]%2==0)
            {
                c4++;
            }
            else
            {
                c5++;
            }
        }

    }*/


    printf("Positive number: %d\nNegative number : %d\n Zero :%d\nEven number :%d\nOdd number : %d",c1,c2,c3,c4,c5);
    return 0;
}
