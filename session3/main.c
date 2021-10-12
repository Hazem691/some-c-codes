#include <stdio.h>
#include <stdlib.h>

void swaping(int x , int y){
    int temp ;
    printf("before swapping \n ");
    printf("x=%d   y=%d \n",x,y);
    temp = x ;
    x = y ;
    y = temp ;

    printf("after swapping \n ");
    printf("x=%d    y=%d",x,y);

}
///******* swapping using only two variables
void swaping2(int x , int y){
     printf("before swapping \n ");
     printf("x=%d   y=%d \n",x,y);
     x = x + y ;
     y = x - y ;
     x = x - y ;
     printf("before swapping \n ");
     printf("x=%d   y=%d \n",x,y);
}



int main()
{
    int x ;
    int y ;
    printf("Enter the first number \n");
    scanf("%d",&x);
    printf("Enter the first number \n");
    scanf("%d",&y);
   /// swaping(x,y);
    swaping2(x,y);

    return 0;
}

