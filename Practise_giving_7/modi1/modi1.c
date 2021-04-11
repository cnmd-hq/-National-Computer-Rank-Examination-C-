#include <stdio.h>
void fun()
{
 int a[3][3],sum;
 int i,j;
/*************found**************/
 sum=0;
 for (i=0;i<3;i++)
    { for (j=0;j<3;j++)
/*************found**************/
      scanf("%d",&a[i][j]);
    }
 for(i=0;i<3;i++)
     sum=sum+a[i][i];
 printf("Sum=%d\n",sum);
 /*该题考查对循环语句的掌握和对数组概念的理解。本题的解题思路为:先从键盘输入一个3×3矩阵，然后循环累加，
 执行循环语句中的sum=sum+a闭];。因为变量sum用来存放累加后的结果，所以应对其初始化为0。
 第二处错误考查标准输入函数scanf的格式，被赋值的变量前要加上取地址符"&"。*/
}
void main()
{
fun();
system("pause");
}
