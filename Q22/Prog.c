//���������
/*
��2������<<<QN>>>���ú���fun()ʹ����a�ϰ�����Ԫ���е�ֵȫ����Ϊ0,
���д����void fun(int a[ ][N])������
   | 1 9 7 |                                  | 0 0 0 |
a= | 2 3 8 | ���򷵻��������a�����е�ֵӦΪ  | 2 0 0 |
   | 4 5 6 |                                  | 4 5 0 |

*/
#define  N  5

#include   "stdio.h"
#include   "conio.h"
#include   "stdlib.h"
#include   "test.h"

void  fun ( int a[][N] )
{
	int p,q;
	for(p=0;p<N;++p){
		for(q=p;q<N;++q){
			a[p][q]=0;
		}
	}
}

main ( )
{  int  a[N][N], i, j;
   printf("***** The array *****\n");
   for ( i =0;  i<N; i++ )
   {  for ( j =0; j<N; j++ )
     {  a[i][j] = rand()%20; printf( "%4d", a[i][j] ); }
        printf("\n");
   }
   fun ( a );
   printf ("THE  RESULT\n");
   for ( i =0;  i<N; i++ )
   {  for ( j =0; j<N; j++ ) printf( "%4d", a[i][j] );
      printf("\n");
   }
   test ( );
}
