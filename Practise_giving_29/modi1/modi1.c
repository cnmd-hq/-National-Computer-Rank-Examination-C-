#include<stdio.h>
#include  <stdio.h>
#include  <string.h>
void fun(char  a[])
{  int  b[26], i, n,max;
   for (i=0; i<26; i++)
/**********found**********/
      b[i] = 0;
   n= strlen(a);
   for (i=0; i<n; i++)
      if (a[i] >='a' && a[i]<='z')
/**********found**********/
         b[a[i] - 'a']++;
      else  if (a[i] >='A' && a[i]<='Z')
         b[a[i] -'A']++;
   max = 0;
   for (i=1; i<26; i++)
/**********found**********/
     if (b[max] < b[i])
		 /*(1������a��ŵ����ַ���������bΪ���������ŵ���ÿ���ַ��ĸ�����Ӧ������bÿ��Ԫ�س�ʼ��Ϊ0��
(2)Сд��ĸ��ASCII���ȥ'a��ASCIiI��Ϊ��Ӧ��ĸ���±�ֵ����Ӧ�±�ֵ������Ԫ�ص�ֵ����1��
(3�����ֵС�ڱ��Ƚ���ʱ���ѱ��Ƚ������±�ֵ����max��max�д�ŵ����ǵ�ǰ���ֵ��*/
       max=i;
   printf("���ִ��������ַ��� :  %c\n", max + 'a');
}
void main( )
{  char  a[200];
   printf("������һ����ͳ�Ƶ��ַ��� :   ");   scanf("%s", a);
   fun(a);
   system("pause");
}

