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
	  /*(1)本题是利用选择法对数组元素进行比较排序。所谓选择法，是依次用当前取得的元素和其后面的元素进行比较，
	  在第一个元素和其后面的元素顺次比较时，可以借助中间变量来对两个数进行交换，要保证第一个元素始终存放数组中的最大数，
	  以后依次挑选出次大数，这样最终的数组就是有序的。strlen函数所求得的字符串长度，数组最大下标为字符长度减1，所以要减1。
(2这里是一个分析逻辑错误，题中要求按升序排序，所以应改为f(t团>t[+1])。*/
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
