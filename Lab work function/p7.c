#include <stdio.h>
int digitCount(int a)
{
int r,d,c=0;
while(a>0){
    r=a%10;
    a=a/10;
    c++;
}
return c;
}
int main ()
{

    int x;
    printf("Enter an integer: ");
        scanf("%d",&x);
    printf("%d ",digitCount(x));
    return 0;


}
