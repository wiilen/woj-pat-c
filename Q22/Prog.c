//二、编程题
/*
（2）程序<<<QN>>>利用函数fun()使数组a上半三角元素中的值全部置为0,
请编写函数void fun(int a[ ][N])，例如
   | 1 9 7 |                                  | 0 0 0 |
a= | 2 3 8 | ，则返回主程序后a数组中的值应为  | 2 0 0 |
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
