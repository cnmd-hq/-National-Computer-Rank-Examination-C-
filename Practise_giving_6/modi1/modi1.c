#include <stdio.h>
/**********found**********/
void fun ( char *s, int *a, int *b )
{
  while ( *s )
  {  if ( *s >= 'A' && *s <= 'Z' )
/**********found**********/
       *a=*a+1 ;
     if ( *s >= 'a' && *s <= 'z' )
/**********found**********/
        *b=*b+1;
     s++;
	 /*(1由主函数中调用fun函数的语句fun(s，&upper，&lower)可知，函数的后两个变量为指针的形式,所以用*a和*b。
(2)*a的作用是用来记录大写字母的个数，此处的作用是对*a累加1，所以此处应改为*a=*a+1。
(3)*b的作用是用来记录小写字母的个数，此处的作用是对*累加1，所以此处应改为*动=*b＋1。*/
  }
}

void main( )
{  char   s[100];  int   upper = 0, lower = 0 ;
   printf( "\nPlease a string :  " );  gets ( s );
   fun ( s,  & upper, &lower );
   printf( "\n upper = %d  lower = %d\n", upper, lower );
   system("pause");
}

