#include <stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;//20
    *y=temp;//10

}
int main ()
{
   int a=10,b=20;
   swap(&a,&b);
   printf("\n%d %d",a,b);//20 10


}
