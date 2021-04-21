#include  <stdio.h>
double f1(double  x)
{  return x*x;  }
double f2(double  x, double  y)
{  return  x*y;  }
/**********found**********/
double fun(int  i, double  x, double  y)
{ if (i==1)
/**********found**********/
    return f1(x);
  else
/**********found**********/
    return  f2(x, y);
/*填空1:本空函数fun的返回值，根据return可知，不论返回的是f1还是2，它们的返回值均为double型的，故此空应该填写double。
填空2:因为函数fun的功能是根据形参的值返回某个函数的值，当等于1时，应该返回的是f1。
填空3:如果不满足话，应该返回的是f2。*/
}
void main()
{ double  x1=5, x2=3, r;
  r = fun(1, x1, x2);
  r += fun(2, x1, x2);
  printf("\nx1=%f, x2=%f, x1*x1+x1*x2=%f\n\n",x1, x2, r);
  system("pause");
}

