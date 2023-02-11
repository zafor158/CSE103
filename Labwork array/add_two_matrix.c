#include <stdio.h>
int main (){
int a[2][3];
int b[2][3];
int c[2][3];
printf("A matrix\n");
for(int i=1;i<=2;i++){
    for(int j=1;j<=3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("B matrix\n");
for(int i=1;i<=2;i++){
    for(int j=1;j<=3;j++){
        scanf("%d",&b[i][j]);
    }
}

for(int i=1;i<=2;i++){
    for(int j=1;j<=3;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("A+B=C matrix\n");
for(int i=1;i<=2;i++){
    for(int j=1;j<=3;j++){
      printf("%d ",c[i][j]);
    }
    printf("\n");
}





}
