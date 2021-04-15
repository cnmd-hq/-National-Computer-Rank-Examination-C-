#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun(char *ss)
{
	int i;
	for(i=0;ss[i]!='\0';i++)
		if(i%2==1&&ss[i]>='a'&&ss[i]<='z')
			ss[i]=ss[i]-32;
	/*该题要求将给定字符串中奇数位置的字母转换为大写，需要先判断奇数位置以及是否是小写字母，如果是再通过其转换方法进行转换。
从c语言的学习中知道，只要将小写字母减去32即转成大写字母，将大写字母加上32即转成小写字母。本程序用f语句实现转换功能。*/
}
void main()
{
  FILE *wf;
  char tt[81],s[81]="abc4Efg";
  system("CLS");
  printf("\nPlease enter an string within 80 characters:\n");
  gets(tt);
  printf("\n\nAfter changing, the string\n  %s",tt);
  fun(tt);
  printf("\nbecomes\n %s\n",tt);
/******************************/
  wf=fopen("out.dat","w");
  fun(s);
  fprintf (wf,"%s",s);
  fclose(wf);
/*****************************/
  system("pause");
}
