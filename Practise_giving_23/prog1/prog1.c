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
  /*�������˱���s1��s��s1��ʾÿ��ķ�ĸ(������Ľ׳�)��s����ۼӺ͡�
  ѭ���������ۼӵĴ�������ѭ�����н��н׳˺��ۼӲ������ۼӵĽ������s�С�
  �˴�ʹ������˷�����pow(x��i)���京������x��������ֵ��*/
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
