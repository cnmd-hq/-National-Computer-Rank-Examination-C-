#include<string.h>
#include<stdio.h>
#define N 80
int fun(char *s)
{
  int i,j=0;
  for(i=0;s[i]!='\0';i++)
     if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0'))   /*���һ����ĸ����һ���ַ�Ϊ�ո���߽�����ǣ����ʾһ�����ʽ���*/
        j++;
  return j;           /*���ص��ʸ���*/
//Ҫ�жϵ��ʵĸ����������뵽���ǳ�������ʶ���һ�����ʣ����һ����ĸ����һ���ַ�Ϊ�ո���߽�����ǣ����ʾһ�����ʽ�����
//��˳���ʹ��forѭ�������������ַ�������f��������жϵ�ǰ�ַ��Ƿ��ʾһ�����ʵĽ����������ǰ�ַ���ʾһ�����ʽ��������ŵ��ʸ����ı�����1����󷵻ص��ʵĸ�����
}
void main()
{ 
  FILE *wf;
  char line[N]; 
  int num=0;
  printf("Enter a string:\n "); 
  gets(line);
  num=fun(line);
  printf("The number of word is:%d\n\n ",num);
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%d",fun("a big car"));
  fclose(wf);
/*****************************/
}
