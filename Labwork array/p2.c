#include <stdio.h>
int main ()
{
    int a[5];
    int marks;
    int tot_marks=0;
    float avg;
    for(int i=1; i<=5; i++)
    {
       scanf("%d",&marks);//89,90
       a[i]=marks;
       tot_marks+=a[i];//89+90
       //marks=89
       //a[1]=89;
       //tot_marks=tot_marks+a[1]
    }
    avg=tot_marks/5;

    printf("Summation of five students marks: %d",tot_marks);
    printf("\nAverage marks of five students : %.2f",avg);




}

