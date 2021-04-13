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
		/*1)变量t存放公式的和，通过循环语句进行复合运算，因此此处应改为t-=1.0i;，注意此处应进行变量的类型转换。
		(2)循环结束后应将和值返回给主函数。*/
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
