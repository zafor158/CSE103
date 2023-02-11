#include <stdio.h>
int main ()
{
    float b[10];
    float input;
    float a;
    int pritu=0,count=0;
    for(int i=1; i<=10; i++)
    {
        scanf("%f",&input);
        b[i]=input;

    }

   printf("Enter your number which you want to find: ");
    scanf("%f",&a);//12.34

    for(int i=1; i<=10; i++)
    {
     if(b[i]==a){
        pritu=1;
        count++;//2
     }
    }
    if(pritu==1){
            printf("Number found");
            printf("\nNumber of appears: %d ",count);
    }
    else printf("Not found");

    /*
    12.34
    45.67
    21.34
    43.76
    1.6
    12.34
    456.89
    90.78
    23.43
    33.54*/

return 0;
}


