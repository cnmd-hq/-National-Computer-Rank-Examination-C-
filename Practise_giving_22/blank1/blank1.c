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
	/*����ͳ���ַ����и���ĸ�ĸ�����������һ������26�����ͱ��������飬�����洢ÿ����ĸ�ĸ��������1: isalpha�������������жϵ�ǰ�ַ��Ƿ�Ϊ��ĸ��tolower�����������ǽ���ǰ��ĸת��ΪСд��ĸ,����Ӧ��*s��
���2:�Ѹ���ĸ���ֵĸ����ۼӵ�ָ���������У�����Ӧ��1��
���3: max������¼���ִ�����ߵ���ĸ�ĳ��ִ����������ǰ����ĸ���ִ�������������max,��ô�Ѹô�����ֵ��max������Ӧ��k[n]��*/
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

