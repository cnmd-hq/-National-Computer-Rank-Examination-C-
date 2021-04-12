#include <stdio.h>
#include <conio.h>
/*************found**************/
void fun(int m,int k)
{ int aa[20], i;
  for(i=0;m;i++)
  {
	/*************found**************/
	aa[i]=m%k;
	m/=k;
  }
  for(;i;i--)
	/*************found**************/
	printf("%d",aa[i-1]);
  /*(1)函数定义的格式错误，不应带有";"。
(2将十进制正整数转换为任意进制的数与十进制正整数转换成二进制的数的方法是一样的。
从整数n译出它的各位k进制数值，需采用除k取余的方法，即求n除k的余数，得到它的k进制的个位数，
接着将n除以k。在n不等于o的状况下循环，能顺序求出n的k进制的各个位上的数。
(3)在进行for(i=O:m;i++)循环结束时，已经多加了一个1，所以这里要减去1。*/
}
void main()
{
  int b,n;
  printf("\nPlease enter a number and a base:\n");
  scanf("%d%d",&n,&b);
  fun(n,b);
  printf("\n ");
}
