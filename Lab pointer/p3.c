#include <stdio.h>
int cal_average(int a[],int s,float *q)
{
    int sum=0;
    for(int i=0; i< s; i++)
    {
        sum+=a[i];
    }
    printf(" Summation : %d ",sum);
     *q=sum/s;


}
int main ()
{
    int size;
    float average=1;//
    printf("Enter the array size: ");
    scanf("%d",&size);
    float a[size];
    printf("Enter the array : ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

   cal_average(a,size,&average);
    printf("Average: %.2f",average);

}
