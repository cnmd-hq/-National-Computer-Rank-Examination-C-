#include  <stdio.h>
double f1(double  x)
{  return  x*x;  }
double f2(double x, double y)
{  return  x*y;  }
double fun(double  a, double  b)
{
/**********found**********/
  double (*f)();
  double  r1, r2;
/**********found**********/
  f = f1; 
  r1 = f(a);
/**********found**********/
  f = f2 ; 
  r2 = (*f)(a, b);
  return  r1 + r2;
  /*填空1:(*i)O代表一个指向函数的指针变量，而本题所被调用的f1、f2两函数的返回值均为double型，因而此空应该填写double。
填空2:因为在给函数指针变量赋值时，只需给出函数名而不必给出参数，因而此空应该填写fl。填空3:同填空2，此空应该填写f2。
相关知识点:
⑴指向函数的指针变量的一般定义形式为:数据类型(*指针变量名).;
(2)函数的调用可以通过函数名调用，也可以通过函数指针调用。
(⑶)在给函数指针变量赋值时，只需给出函数名而不必给出参数。*/
}
void main()
{ double  x1=5, x2=3, r;
  r = fun(x1, x2);
  printf("\nx1=%f,  x2=%f,  x1*x1+x1*x2=%f\n",x1, x2, r);
  system("pause");
}

