#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
/*************found**************/
double fun (int n)
{ int a,b,c, k;
  double s;
  s=0.0;a=2;b=1;
  for(k=1;k<=n;k++)
     {
/*************found**************/
      s=s+(double)a/b;
      c=a;a=a+b;b=c;
     }
  return s;
  /*(1)由于返回值是double型的，所以函数要定义为double型。
(2)C语言规定所有关键字都必须用小写英文字母表示，所以s=s+(Double) a/b;应改为s=s+(double) a/b; 。*/
}
void main()
{ int n=5;
  system("CLS");
  printf("\nThe value of function is:%lf\n",fun(n));
  system("pause");
}
