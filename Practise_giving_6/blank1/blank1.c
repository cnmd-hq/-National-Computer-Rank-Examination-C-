#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
#define  N  9
long  ctod( char  *s )
{ long  d=0;
  while(*s)
    if(isdigit( *s))  {
/**********found**********/
      d=d*10+*s-'0';
/**********found**********/
      s++;  
	 }
  return  d;
}
long  fun( char  *a, char  *b )
{
/**********found**********/
  return  ctod(a)+ctod(b);
  /*填空1: isdigt(*s)这个函数表示检查*s是否是数字(0~9),d=d*10＋*s-?表示的是要把字符串分别转换成面值相同的整数，因此本空应该填写'0'。
填空2:*s所代表的字符串中字符需要一个一个的字符进行转换成整数，因此此空应该填写s++或++s。
填空3:题目要求把转换后的字符进行相加后作为函数的返回值，因此本空应该填写ctod(a)+ctod(b)。*/
}
void main()
{ char  s1[N],s2[N];
  do
  { printf("Input  string  s1 : "); gets(s1); }
  while( strlen(s1)>N );
  do
  { printf("Input  string  s2 : "); gets(s2); }
  while( strlen(s2)>N );
  printf("The result is:  %ld\n", fun(s1,s2) );
  system("pause");
}


