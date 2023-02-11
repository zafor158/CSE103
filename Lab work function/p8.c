#include <stdio.h>
int square(int a)
{
    int sqr=1;
    sqr=a*a;
    return sqr;

}
int main ()
{
    int x;
    scanf("%d",&x);
    printf("%d",square(x));


}
