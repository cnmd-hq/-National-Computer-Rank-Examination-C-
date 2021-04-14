#include <stdio.h>
#include <string.h>

void fun( char  *a, char  *b, char  *c )
{
  int   i , j;     char   ch;
  i = 0;    j = strlen(b)-1;
/************found************/
  while ( i < j )
  {   ch = b[i]; b[i] = b[j]; b[j] = ch;
      i++;    j--;
  }
  while ( *a || *b ) {
/************found************/
     if ( *a )
       { *c = *a;  c++; a++; }
     if ( *b )
       { *c = *b;  c++; b++; }
  }
  *c = 0;
  /*(1)由和j定义的初始值可知，此处应该判断是否小于j，_所以应改为while(i<j)。(2)此处将f错写成f，这个错误比较简单，但往往不容易发现。*/
}

void main()
{
  char   s1[100],s2[100],t[200];
  printf("\nEnter s1 string : ");scanf("%s",s1);
  printf("\nEnter s2 string : ");scanf("%s",s2);
  fun( s1, s2, t );
  printf("\nThe result is : %s\n", t );
  system("pause");
}

