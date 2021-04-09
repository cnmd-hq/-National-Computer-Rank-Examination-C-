#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
/*************found**************/
double fun(int m)
{ double y=0, d;
  int i;
/*************found**************/
  for(i=100;i<=m;i+=100)
     {d=(double)i*(double)i;
      y+=1.0/d;
     }
  return(y);
  /*(1题目要求在函数fun中求级数前m项和，可用循环语句，每次计算级数中的一项，然后累加。第一处错误在于定义fun(int m)，由函数的返回值可知应该定义为double fun(int m)。
(2)for(i=100，i<=m，i+=100)中是一个简单的语法错误。for循环语句的形式为for(表达式1;表达式2;表达式3)，其表达式之间应以";"相隔。*/
}
void main()
{ int n=2000;
  system("CLS");
  printf("\nThe result is %1f\n",fun(n));
}

