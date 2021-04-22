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
		 /*(1）数组a存放的是字符串，数组b为整型数组存放的是每个字符的个数，应将数组b每个元素初始化为0。
(2)小写字母的ASCII码减去'a的ASCIiI即为相应字母的下标值，相应下标值的数组元素的值增加1。
(3）最大值小于被比较数时，把被比较数的下标值赋给max，max中存放的总是当前最大值。*/
       max=i;
   printf("出现次数最多的字符是 :  %c\n", max + 'a');
}
void main( )
{  char  a[200];
   printf("请输入一个待统计的字符串 :   ");   scanf("%s", a);
   fun(a);
   system("pause");
}

