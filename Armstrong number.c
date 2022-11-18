#include <stdio.h>
#include <math.h>
void armstrong(int c,int n)
{
    int temp=n;
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum+=pow(r,c);
        n=n/10;

    }
    if(temp==sum)printf("%d is an Armstrong Number",temp);
    else printf("%d is not an Armstrong number",temp);

}
int main ()
{
    int n,r,c=0,t,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }

    armstrong(c,temp);

    return 0;

}
