#include <stdio.h>

double fun ( int m )
{  double   y = 1.0 ;
   int  i ;
/**************found**************/
   for(i = 2 ; i <= m ; i++)
/**************found**************/
      y -=1.0 /(i * i) ;
   return( y ) ;
   /*(1使用for循环计算公式，必须计算到m，所以应改为for(=2; i<=m;i++)。
(2)在除法运算中，如果除数和被除数都是整数，那么所除结果也是整数，因此应改为y-=1.0/(i*i)。*/
}

void main( )
{  int n = 5 ;

   printf( "\nThe result is %lf\n", fun ( n ) ) ;
   system("pause");
}

