#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
/*************found**************/
float fun(int n)
{ float A=1;int i;
/*************found**************/
  for(i=2;i<=n;i++)
     A=1.0/(1+A);
  return A;
  /*(1根据函数的返回值可知，函数应定义为float型。
(2该题中函数fun的作用是计算数列前n项的和，而数列的组成方式是:第n项的分母是1加第n-1项的值，分子为1，
如果循环累加按for(i=2; i<n; i+＋)执行，当输入n=2时循环不会执行，程序将得不到想要的结果，因此循环变量的取值范围应包括2。
填空3:题目要求将小于平均值且最接近平均值的数作为函数返回，而j表达的是最接近平均值的数在数组中的下标，因而本空应该填写x[]。*/
}
void main()
{ int n;
  system("CLS");
  printf("\nPlease enter n: ");
  scanf("%d",&n);
  printf("A%d=%lf\n",n,fun(n));
  system("pause");
}
