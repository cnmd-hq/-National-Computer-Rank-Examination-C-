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
  /*(1)���ڷ���ֵ��double�͵ģ����Ժ���Ҫ����Ϊdouble�͡�
(2)C���Թ涨���йؼ��ֶ�������СдӢ����ĸ��ʾ������s=s+(Double) a/b;Ӧ��Ϊs=s+(double) a/b; ��*/
}
void main()
{ int n=5;
  system("CLS");
  printf("\nThe value of function is:%lf\n",fun(n));
  system("pause");
}
