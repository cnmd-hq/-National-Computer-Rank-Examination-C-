#include  <string.h>
#include  <stdio.h>
void fun(char  t[])
{
 char c;
 int i,j;
 /*************found**************/
 for(i=strlen(t)-1;i>0;i--)
     for(j=0;j<i;j++)
        /*************found**************/
	  if(t[j]>t[j+1])
          {
           c= t[j];
           t[j]=t[j+1];
           t[j+1]=c;
          }
	  /*(1)����������ѡ�񷨶�����Ԫ�ؽ��бȽ�������νѡ�񷨣��������õ�ǰȡ�õ�Ԫ�غ�������Ԫ�ؽ��бȽϣ�
	  �ڵ�һ��Ԫ�غ�������Ԫ��˳�αȽ�ʱ�����Խ����м�����������������н�����Ҫ��֤��һ��Ԫ��ʼ�մ�������е��������
	  �Ժ�������ѡ���δ������������յ������������ġ�strlen��������õ��ַ������ȣ���������±�Ϊ�ַ����ȼ�1������Ҫ��1��
(2������һ�������߼���������Ҫ��������������Ӧ��Ϊf(t��>t[+1])��*/
}
void main()
{
 char  s[81];
 
 printf("\nPlease  enter a character string :");
 gets(s);
 printf("\n\nBefore sorting :\n  %s",s);
 fun(s);
 printf("\nAfter sorting decendingly:\n %s",s);
 system("pause");
}
