#include <stdio.h>

double fun ( int m )
{  double   y = 1.0 ;
   int  i ;
/**************found**************/
   for(i = 2 ; i <= m ; i++)
/**************found**************/
      y -=1.0 /(i * i) ;
   return( y ) ;
   /*(1ʹ��forѭ�����㹫ʽ��������㵽m������Ӧ��Ϊfor(=2; i<=m;i++)��
(2)�ڳ��������У���������ͱ�����������������ô�������Ҳ�����������Ӧ��Ϊy-=1.0/(i*i)��*/
}

void main( )
{  int n = 5 ;

   printf( "\nThe result is %lf\n", fun ( n ) ) ;
   system("pause");
}

