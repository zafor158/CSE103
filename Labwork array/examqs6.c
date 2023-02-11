#include <stdio.h>
int main (){

int a[5][2],i,j;
for( i=1;i<=5;i++){
    for( j=1;j<=1;j++){
        scanf("%d",&a[i][j]);
    }
}
for( i=1;i<=5;i++){
    for( j=2;j<a[i][1];j++){
       if(a[i][1]%j==0){
        break;
       }
    }
    if(a[i][1]==j){

        printf("%d ",a[i][1]);
    }

}

    printf("\n");
}



