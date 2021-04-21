#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double fun(double x, int n)
{
	double s=1.0,s1=1.0;
	int	i;
	for(i=1;i<=n;i++)
	{
		s1=s1*i;
		s=s+pow(x,i)/s1;
	}
	return s;
  /*程序定义了变量s1和s，s1表示每项的分母(即各项的阶乘)，s存放累加和。
  循环语句控制累加的次数，在循环体中进行阶乘和累加操作，累加的结果存入s中。
  此处使用了求乘方函数pow(x，i)，其含义是求x的欲方的值。*/
}
void main()
{ 
  FILE *wf;
  system("CLS");
  printf("%f ",fun(0.3,10));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(0.3,10));
  fclose(wf);
/*****************************/
  system("pause");
}
