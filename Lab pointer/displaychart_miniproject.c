#include <stdio.h>
void displaychart(int curp,char player[4])
{
    int i,j,t,c,sft=0,diceres,pos1,pos2;


    if(curp==100)
    {
        printf("*****Congratulations*****\n\n\nPlayer %s wins\n",player);
        scanf("%*s");
        exit(0);
    }

    for(i=10; i>0; i--)
    {
        t=i-1;
        if((sft%2)==0)
        {
            c=0;
            for(j=10; j>=1; j--)
            {
                diceres=(i*j)+(t*c);
                c++;

                if(curp==diceres)
                    printf("%s\t",player);
                else
                    printf("%d\t",diceres);

            }
            sft++;
        }
        else
        {
            c=9;
            for(j=1; j<=10; j++)
            {
                diceres=(i*j)+(t*c);
                c--;

                if(curp==diceres)
                    printf("%s\t",player);
                else
                    printf("%d\t",diceres);
            }


            sft++;
        }
        printf("\n\n");
    }

    printf("--------------------------------------------------------------------------\n");
}
int main ()
{

    int dice,cur_pos1=0;
    scanf(" %d",&cur_pos1);
    //cur_pos1=dice+cur_pos1;
    if(cur_pos1<101)
    {
        if(cur_pos1==99)
        {
            cur_pos1=1;
            displaychart(1,"$P1$");//snake

        }
        if(cur_pos1==65)
        {
            cur_pos1=40;
            displaychart(40,"$P1$");//snake
        }
        if(cur_pos1==25)
        {
            cur_pos1=9;
            displaychart(9,"$P1$");//snake
        }
        if(cur_pos1==70)
        {
            cur_pos1=93;
            displaychart(93,"$P1$");//ladder
        }
        if(cur_pos1==60)
        {
            cur_pos1=83;
            displaychart(83,"$P1$");//ladder
        }
        if(cur_pos1==13)
        {
            cur_pos1=42;
            displaychart(42,"$P1$");//ladder
        }
        else
        {
            displaychart(cur_pos1,"$P1$");
        }

    }
    else
    {
        cur_pos1=cur_pos1-dice;
        printf("Range exceeded of Player 1.\n");
        displaychart(cur_pos1,"$P1$");
    }




}
