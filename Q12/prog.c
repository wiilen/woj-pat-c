//һ���Ĵ���
/*
��2���ļ�prog.c����Ĺ����ǣ���������һ���ַ����ԡ�����������
�ֱ�ͳ��������ĸ�����֡������ַ��ĸ�����
ע��error����һ�����д���
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