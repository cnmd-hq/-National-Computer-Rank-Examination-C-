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
	/*����Ҫ��ɾ�����пո񣬼��������˿ո���������������ַ�������C������û��ֱ��ɾ���ַ��Ĳ�����
	���ԶԲ���Ҫɾ�����ַ�����"����"�Ĳ�������ָ��pָ���ַ����е�ÿһ���ַ���ÿָ��һ���ַ����ж����Ƿ�Ϊ�ո�
	�����ǿո��򱣴浽str�š�*/
  
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
