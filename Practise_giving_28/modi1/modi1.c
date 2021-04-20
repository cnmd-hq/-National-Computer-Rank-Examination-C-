#include  <stdio.h>
void  fun( int  *s, int  n )
{
/**********found**********/
   int  i,  one=0, zero=0 ;
   for(i=0; i<n; i++)
/**********found**********/
   switch( s[i] )
   {
/**********found**********/
      case  0  :  zero++;break;
      case  1  :  one ++;
		  /*(1)变量zero用来统计数字0的个数，应将其初始化为0。
		  (2)语法错误，switchi语句后不加分号。
(3）当数字为0时，变量zero加1，此时应使用break语句跳出switchi语句，进行下一次循环,否则会继续执行case 1语句，使程序不能得出正确结果。*/
   }
   printf( "one : %d    zero : %d\n", one,  zero);
}
void main()
{  int  a[20]={1,1,1,0,1,0,0,0,1,0,0,1,1,0,0,1,0,1,0,0}, n=20;
   fun( a,  n );
   system("pause");
}

