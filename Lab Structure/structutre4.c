#include <stdio.h>
struct book
{

    char name[20];

    float price;

    int pages;

};

void main()
{

    struct book b[3];

    int i;


    for (i=0; i<3; i++)
    {
        printf ("\nEnter book name, price and number of pages: ");
        scanf ("%s%f%d", b[i].name, &b[i].price, &b[i].pages);

    }

    for (i=0; i<3; i++)
    {

        printf ("\nBook # %d:\n", i+1);
        printf ("Name: %s\nPrice: %.2f\nPages %d", b[i].name, b[i].price, b[i].pages);
        printf("\n");

    }

}
