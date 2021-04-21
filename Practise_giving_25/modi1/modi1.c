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
   /*(1)指针p应指向s，所以应改为p=s;o
(2)循环等待,当while循环执行一次,临时变量p应该指向字符串的下一位置，所以应改为while(*p++);。*/
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

