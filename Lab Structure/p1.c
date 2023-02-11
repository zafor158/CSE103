#include <stdio.h>
struct Book {
char name[20];
char author[20];
float price ;
int pages;


};
int main(){
 struct Book b[2];
 float total_price=0;
 for(int i=1;i<=2;i++){
    printf("\nBook #%d Information\n",i);
    scanf("%s %s %f %d",&b[i].name,&b[i].author,&b[i].price,&b[i].pages);

 }
 for(int i=1;i<=2;i++){
    printf("\nBook %d Price %.2f",i,b[i].price);
    total_price+=b[i].price;
}
printf("\nTotal price of two books :%f",total_price);

}*/






