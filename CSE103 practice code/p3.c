//problem 3
#include <stdio.h>
int main (){
        int x,y;
        printf("Enter the cordinate point : ");
        scanf("%d %d",&x,&y);
        if(x>0 && y>0){
            printf("1st cordinate ");
        }
       else  if(x<0 && y>0){
            printf("2nd cordinate ");
        }
          else  if(x<0 && y<0){
            printf("3rd cordinate ");
        }
          else  if(x>0 && y<0){
            printf("4th cordinate ");
        }
}
