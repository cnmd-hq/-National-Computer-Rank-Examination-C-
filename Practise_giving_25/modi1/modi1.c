#include <stdio.h>
#include <string.h>
void  fun (  char  s[], int  n )
{
   char  a[80] , *p;
   int  i;
/**********found***********/
   p=s;
   for(i=0; i<n; i++)  a[i]='*';
   do
   {  a[i]=*p;
      i++;
   }
/**********found***********/
   while(*p++);
   a[i]=0;
   strcpy(s,a);
   /*(1)ָ��pӦָ��s������Ӧ��Ϊp=s;o
(2)ѭ���ȴ�,��whileѭ��ִ��һ��,��ʱ����pӦ��ָ���ַ�������һλ�ã�����Ӧ��Ϊwhile(*p++);��*/
}
void main()
{  int  n;        char  s[80];
   printf("\nEnter a string  :  "); gets(s);
   printf("\nThe string \"%s\"\n",s);
   printf("\nEnter n ( number of * )  :  ");  scanf("%d",&n);
   fun(s,n);
   printf("\nThe string after insert : \"%s\" \n" ,s);
   system("pause");
}

