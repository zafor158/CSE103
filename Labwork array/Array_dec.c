#include <stdio.h>
main()
{

    int i,j,k=0;
    for( i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            k=k+1;
            printf("%d ",k);
        }
        printf("\n");
    }


}
