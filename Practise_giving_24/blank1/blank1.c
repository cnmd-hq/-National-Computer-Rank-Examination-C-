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
/*���1:���պ���fun�ķ���ֵ������return��֪�����۷��ص���f1����2�����ǵķ���ֵ��Ϊdouble�͵ģ��ʴ˿�Ӧ����дdouble��
���2:��Ϊ����fun�Ĺ����Ǹ����βε�ֵ����ĳ��������ֵ��������1ʱ��Ӧ�÷��ص���f1��
���3:��������㻰��Ӧ�÷��ص���f2��*/
}
void main()
{ double  x1=5, x2=3, r;
  r = fun(1, x1, x2);
  r += fun(2, x1, x2);
  printf("\nx1=%f, x2=%f, x1*x1+x1*x2=%f\n\n",x1, x2, r);
  system("pause");
}

