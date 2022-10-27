//problem 5
#include <stdio.h>
int main (){
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("Next odd number %d : %d",x,x+1);
    }
    else {
        printf("Next odd number %d : %d",x,x+2);
    }
    return 0;
}
