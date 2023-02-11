#include <stdio.h>

struct book
{
   char name[20];

    float price;

    int pages;

};

void main()
{

    struct book b1;

    scanf ("%s", &b1.name);

    scanf ("%f", &b1.price);

    scanf ("%d", &b1.pages);

    printf("Book name= %s\n", b1.name);

    printf("Book price= %f\n", b1.price);

    printf("Number of pages = %d", b1.pages);

}
