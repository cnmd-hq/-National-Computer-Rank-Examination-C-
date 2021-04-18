#include  <stdio.h>
int fun(char  *s, char  *t)
{ int  n=0;
  while(*s)
  { if(*s < 97) {
/**********found**********/
     *(t+n)=*s;  n++;  }
/**********found**********/
     s++ ;
  }
  *(t+n)=0;
/**********found**********/
  return  n ;
  /*填空1:判断s所指向的字符串中的字符符合条件时，将当前字符存放到t指向的字符串中，所以应填*s。
填空2:判断完一个字符之后，将字符串的指针移到下一个位置，所以应填s＋＋。
填空3:题目要求函数要返回符合条件的字符个数n，所以应填no*/
}
void main()
{ char  s[81],t[81];    int  n;
  printf("\nEnter a string:\n");  gets(s);
  n=fun(s,t);
  printf("\nThere are %d letter which ASCII code is less than 97: %s\n",n,t);
  system("pause");
}

