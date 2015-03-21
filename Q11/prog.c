//一、改错题
/*
（1）程序的功能是：换数。例如:输入： 3和9  输出： 9和3
注释error的下一行中有错误
*/
#include "stdio.h"
void main()
{
   int x, y, t;

   printf("Please input two int numbers:");
   //===============error==============
   scanf("%d,%d",&x,&y);
   printf("x = %d, y = %d \n", x, y );

  //===============error==============
   t=x;x=y;y=t;
  
  printf("x = %d, y = %d \n", x, y );

}
