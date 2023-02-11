#include <stdio.h>
int search_number(int *p,int length,int search)
{
    int c=0;
    for(int i=1; i<=length; i++)
    {
        if(p[i]==search)
        {
            c++;
        }
    }
    return c;

}
int main ()
{
    int size,s;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int a[size];
    for(int i=1; i<=size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search value of the array: ");
    scanf("%d",&s);
    int count=search_number(a,size,s);
    printf("Number of appreance of %d is %d",s,count);

}
