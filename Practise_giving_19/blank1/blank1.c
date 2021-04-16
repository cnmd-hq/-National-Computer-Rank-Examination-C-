#include  <stdio.h>
int fun(char  *s)
{ int  n=0, flag=0;
  while(*s!='\0')
  { if(*s!=' ' && flag==0) {
/**********found**********/
     n++ ;  flag=1;}
/**********found**********/
    if (*s==' ')  flag=0;
/**********found**********/
    s++ ;
	/*填空1:单词个数用变量n来统计，当前字母不是空格且flag状态标志为0时，可以判断出现一个新的单词，
	则单词数就加1，将状态标志flag置为1，所以应填n++。
	填空2:当前字符是空格时，flag状态标志置0，所以应填0。
填空3:判断完一个字符之后，要继续判断字符串的下一个位置，所以应填s++。*/
  }
  return  n;
}
void main()
{ char  str[81];    int  n;
  printf("\nEnter a line text:\n");  gets(str);
  n=fun(str);
  printf("\nThere are %d words in this text.\n\n",n);
  system("pause");
}

