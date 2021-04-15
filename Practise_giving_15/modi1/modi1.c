#include <conio.h>
#include <stdio.h>
#define  M 10
int  a[M][M] = {0} ;

/**************found**************/
void fun(int a[][M],int m)
{  int j, k ;
   for (j = 0 ; j < m ; j++ )
        for (k = 0 ; k < m ; k++ )
/**************found**************/
          a[j][k] = (k+1) * (j+1) ;
   /*(1)在函数体fun中可知，a是一个字符串数组型变量，设置实参时，用**a表示是错误的，所以应改为void fiun(int a[]
[M], int m)。
(⑵根据输出的结果可知，应改为al[i][k]=(k+1)*(j+1); 。*/
}

void main ( )
{  int  i, j, n ;

   printf ( " Enter n : " ) ;  scanf ("%d", &n ) ;
   fun ( a, n ) ;
   for ( i = 0 ; i < n ; i++)
   {    for (j = 0 ; j < n ; j++)
          printf ( "%4d", a[i][j] ) ;
        printf ( "\n" ) ;
   }
   system("pause");
}

