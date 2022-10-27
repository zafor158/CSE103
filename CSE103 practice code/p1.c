//problem 1
#include <stdio.h>
int main (){
        int t1,t2,t3;
        printf("Enter three angle of the traingle : ");
        scanf("%d %d %d",&t1,&t2,&t3);
        int sum=t1+t2+t3;
        if(sum<=180){
                  if(t1 == 60 && t2 == 60 && t3 == 60){
        printf("Equilateral Traingle");
    }
       else if(t1==90||t2==90||t3==90){
        printf("Right Angle Traingle");
    }
      else{
        printf("Any others");
    }

        }
        else {
            printf("Traingle does not exit");
        }

}

