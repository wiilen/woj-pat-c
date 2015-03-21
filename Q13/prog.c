//一、改错题
/*
（3）文件prog.c程序的功能是：是从键盘输入学号，然后输出学号中百位数字是3的学号，输入0时结束循环。

注释error的下一行中有错误
*/
#include <stdio.h>
void main()
{ long int num;
  scanf("%ld",&num);
	//==========  error ===========
  while(!num)
   { 
		//==========  error ===========
		if((num%100)/10==3)  
			printf("\n%ld\n",num);
        scanf("%ld",&num); 
   } 
}
