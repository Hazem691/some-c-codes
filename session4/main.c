#include <stdio.h>
#include <stdlib.h>
void editing(int*p){
  printf("the value before editing : \n %d \n",*p);
  ++ *p;
  printf("the value after editing : \n %d ",*p);

}
int main()
{

    int x ;
    printf("Enter the number = ");
    scanf("%d",&x);
    editing(&x);
    return 0;
}
