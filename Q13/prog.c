//һ���Ĵ���
/*
��3���ļ�prog.c����Ĺ����ǣ��ǴӼ�������ѧ�ţ�Ȼ�����ѧ���а�λ������3��ѧ�ţ�����0ʱ����ѭ����

ע��error����һ�����д���
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
