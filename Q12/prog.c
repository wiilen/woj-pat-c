//一、改错题
/*
（2）文件prog.c程序的功能是：任意输入一串字符，以“？”结束，
分别统计其中字母、数字、其他字符的个数。
注释error的下一行中有错误
*/
#include <stdio.h>
void main()
{
	char c ; int n1=0,n2=0,n3=0;
  	printf("input characters:");
	//===============error==============
  	while( c=getchar( );c!='?')
	{
	//===============error==============
  	  if ('a'<= ch <= 'Z')n1++;
    	  else if(c>='0'&&c<='9')n2++;
          else n3++;
	}
  	printf("n1=%d, n2=%d, n3=%d\n",n1,n2,n3);
}