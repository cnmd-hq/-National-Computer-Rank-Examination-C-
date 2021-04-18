#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
int fun(char  *s)
{ int  sum=0;
  while(*s) {
/**********found**********/
    if( isdigit(*s) )  sum+= *s- 48 ;
/**********found**********/
    s++;
  }
/**********found**********/
  return  sum ;
  /*填空1:0字符对应的ASCII码值是48，因此数字字符转换成对应数值时只要减去48，即是该数字字符对应的数值，所以应填48。
填空2:判断完一个字符之后，将字符串指针移到下一个位置，所以应填s＋＋。
填空3:返回累加和sum，所以应填sum。*/
}
void main()
{ char  s[81];    int  n;
  printf("\nEnter a string:\n\n");  gets(s);
  n=fun(s);
  printf("\nThe result is:  %d\n\n",n);
  system("pause");
}

