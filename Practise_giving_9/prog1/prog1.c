#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *fun(char (*a)[81], int num, char *max)
{
  int i=0;
max=a[0];
for(i=O;i<num;i++)
if(strlen(max)<strlen(al])
max=a[i];
return max;
/*�����֮ǰ������Ӧ������ss��һ��ָ��һά�����ָ�������max��ָ��ָ��ı�����
�������ñ���ʱҪע�����*��������ʹ��ѭ���������ַ������飬ʹ����������жϸ��ַ����Ƿ����*/
}
void main()
{
  FILE *wf;
  char ss[10][81],*ps=NULL;
  char s[3][81]={"abcd","deg","diegns"},*p=NULL;
  int  i=0,n;
  system("CLS");
  printf("�������ɸ��ַ�����");
  gets(ss[i]);
  puts(ss[i]);
  while(!strcmp(ss[i], "****")==0)  /*��4���Ǻ���Ϊ��������ı�־*/
     {
      i++;
      gets(ss[i]);
      puts(ss[i]);
     }
  n=i;
  ps=fun(ss,n,ps);
  printf("\nmax=%s\n",ps);
/******************************/
  wf=fopen("out.dat","w");
  p=fun(s,3,p);
  fprintf(wf,"%s",p);
  fclose(wf);
/*****************************/
}
