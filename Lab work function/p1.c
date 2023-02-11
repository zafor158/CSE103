#include <stdio.h>
int is_even(int a){
if(a%2==0){
    return 1;
}
else {
    return 0;
}

}
int main (){
int x;
printf("Enter the value: ");
scanf("%d",&x);
int y=is_even(x);
printf("%d ",y);


}
