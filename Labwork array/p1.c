#include <stdio.h>
int main ()
{
    int a[5];
    a[1]=80;
    a[2]=89;
    a[3]=85;
    a[4]=83;
    a[5]=79;

    int tot_marks=0;
    float avg;
    for(int i=1; i<=5; i++)
    {
        tot_marks+=a[i];
    }
    avg=tot_marks/5;

    printf("Summation of five students marks: %d",tot_marks);
    printf("\n Average marks of five students : %f",avg);

}
