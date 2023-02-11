#include <stdio.h>
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);//20 10

}
int main ()
{
    int a,b;//10 20
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("\n%d %d",a,b);//10 20
}
