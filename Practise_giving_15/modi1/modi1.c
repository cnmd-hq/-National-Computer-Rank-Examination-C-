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
   /*(1)�ں�����fun�п�֪��a��һ���ַ��������ͱ���������ʵ��ʱ����**a��ʾ�Ǵ���ģ�����Ӧ��Ϊvoid fiun(int a[]
[M], int m)��
(�Ƹ�������Ľ����֪��Ӧ��Ϊal[i][k]=(k+1)*(j+1); ��*/
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

