#include <stdio.h>
int main (){
int a[5],input,i,j;
for( i=1;i<=5;i++){
    scanf("%d",&input);//1 2 3 4 5
    a[i]=input;
}
for( i=1;i<=5;i++){
    for( j=2;j<a[i];j++){
           if(a[i]%j==0){
           break;
        }

    }
    if(j==a[i]){
            printf("%d ",a[i]);
        }
}
}
