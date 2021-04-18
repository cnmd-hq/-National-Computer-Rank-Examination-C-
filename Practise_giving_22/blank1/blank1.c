#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
void fun(char  *s)
{ int  k[26]={0},n,i,max=0;    char  ch;
  while(*s)
  { if( isalpha(*s) ) {
/**********found**********/
      ch=tolower(*s);
      n=ch-'a';
/**********found**********/
      k[n]+= 1 ;	
    }
    s++;
/**********found**********/
    if(max<k[n]) max=k[n];
	/*本题统计字符串中各字母的个数，建立了一个包括26个整型变量的数组，用来存储每个字母的个数。填空1: isalpha函数的作用是判断当前字符是否为字母，tolower函数的作用是将当前字母转换为小写字母,所以应填*s。
填空2:把该字母出现的个数累加到指定的数组中，所以应填1。
填空3: max用来记录出现次数最高的字母的出现次数，如果当前该字母出现次数大于最大次数max,那么把该次数赋值给max，所以应填k[n]。*/
  }
  printf("\nAfter count :\n");
  for(i=0; i<26;i++)
     if (k[i]==max) printf("\nletter  \'%c\' :  %d times\n",i+'a',k[i]);
}
void main()
{ char  s[81];
  printf("\nEnter a string:\n\n");  gets(s);
  fun(s);
  system("pause");
}

