#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
double fun(int m)
{
  double t=1.0;
  int i;
  for(i=2;i<=m;i++)
/*************found**************/
      t-=1.0/i;
/*************found**************/
        return t;
		/*1)����t��Ź�ʽ�ĺͣ�ͨ��ѭ�������и������㣬��˴˴�Ӧ��Ϊt-=1.0i;��ע��˴�Ӧ���б���������ת����
		(2)ѭ��������Ӧ����ֵ���ظ���������*/
}
void main()
{int m;
 system("CLS");
 printf("\nPlease enter 1 integer numbers:\n");
 scanf("%d",&m);
 printf("\n\nThe result is %1f\n",
 fun(m));
 system("pause");
}
