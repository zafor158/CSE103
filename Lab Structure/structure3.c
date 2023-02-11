#include <stdio.h>
struct book {

char name[20];

float price;

int pages;

};
int main(){

struct book b1 = {"C programming",650,500};
printf("Book Name : %s \nBook Price:%.2f \nBook Pages:%d",b1.name,b1.price,b1.pages);


}
