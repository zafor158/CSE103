#include <stdio.h>
int sort(int a[],int length)
{
int temp,i,j;
for( i=1;i<=length;i++){
    for(j=i+1;j<=length;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }

}
return a;
}
int main ()
{
    int a[5];
    int k;
    for(int i=1; i<=5; i++)
    {
        scanf("%d",&k);
        a[i]=k;
    }
   sort(a,5);
   for(int i=1;i<=5;i++){
    printf("%d ",a[i]);
   }



}
