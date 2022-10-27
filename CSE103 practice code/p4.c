//problem 4
#include <stdio.h>
int main (){
int a,b,c,d;
    printf("Enter four integer : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);//input from user
    if(a>0 && b==0 && c>0 && d==0){
            printf("Two points are in the same axis");
        }
       else  if(a<0 && b==0&&c<0&&d==0){
            printf("Two points are in the same axis");
        }
        else {
            printf("Two points are not in the same axis");
        }

         return 0;



}
