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
  /*(1��ĿҪ���ں���fun������ǰm��ͣ�����ѭ����䣬ÿ�μ��㼶���е�һ�Ȼ���ۼӡ���һ���������ڶ���fun(int m)���ɺ����ķ���ֵ��֪Ӧ�ö���Ϊdouble fun(int m)��
(2)for(i=100��i<=m��i+=100)����һ���򵥵��﷨����forѭ��������ʽΪfor(���ʽ1;���ʽ2;���ʽ3)������ʽ֮��Ӧ��";"�����*/
}
void main()
{ int n=2000;
  system("CLS");
  printf("\nThe result is %1f\n",fun(n));
}

