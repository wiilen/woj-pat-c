//һ���Ĵ���
/*
��1������Ĺ����ǣ�����������:���룺 3��9  ����� 9��3
ע��error����һ�����д���
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
