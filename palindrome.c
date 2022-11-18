#include <stdio.h>
int main (){
int n,rvrs=0,rmdr=0,temp;
scanf("%d",&n);
temp=n;

while(n!=0){
    rmdr=n%10;
    rvrs=rvrs*10+rmdr;
    n=n/10;
}
if(temp==rvrs)printf("Palindrome");
else printf("Not palindrome");



}
