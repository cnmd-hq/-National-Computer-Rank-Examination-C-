#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
void fun (char *str)
{
	int i=0;
	char *p=str;
	while(*p)
	{
		if(*p!=' ')
		{
			str[i++]=*p;
		}
		p++;
	}
	str[i]='\0';
	/*本题要求删除所有空格，即保留除了空格以外的其他所有字符。由于C语言中没有直接删除字符的操作，
	所以对不需要删除的字符采用"保留"的操作。用指针p指向字符串中的每一个字符，每指向到一个字符都判断其是否为空格，
	若不是空格则保存到str门。*/
  
}
void main()
{
  char str[81];
  char Msg[]="Input a string:";
  int n;
  FILE *out;
  printf(Msg);
  gets(str);
  puts(str);
  fun(str); 
  printf("*** str: %s\n",str); 
  /******************************/
  out=fopen("out.dat","w");
  fun(Msg);
  fprintf(out,"%s",Msg);
  fclose(out);
  system("pause");
  /******************************/
}
