#include  <stdio.h>
#include  <string.h>
#define   N   80
void fun(char  *s, int  n, char  *t)
{ int len,i,j=0;
  len=strlen(s);
/**********found**********/
  if(n>=len) strcpy(t,s);
  else {
/**********found**********/
     for(i=len-n; i<=len-1; i++)  t[j++]= s[i] ;
/**********found**********/
     t[j]='\0';
	 /*填空1:当给定的长度n大于该字符串s的长度，那么把该字符串直接拷贝到t就可以了，所以应填t,s。
填空2:使用for循环语句，把最右边n个字符依次添加到t中，所以应填s[i。
填空3:字符串操作结束，需要给t加一个字符串结束符，所以应填0或'0'.*/
  }
}
void main()
{ char  s[N],t[N];    int  n;
  printf("Enter a string:  ");gets(s);
  printf( "Enter n:");  scanf("%d",&n);
  fun(s,n,t);
  printf("The string t :  ");  puts(t);
  system("pause");
}

