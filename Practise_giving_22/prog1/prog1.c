#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
double fun(int n)
{
	int i;
	double sum=0.0;
	for(i=1;i<=n;i++)
		sum+=1.0/(i*(i+1));
	return sum;
	/*本题要求级数的和，由多项式的形式可知，应使用循环语句实现，循环的通项为1/n(n+1)。
	本程序首先定义了和变量及循环变量，然后运用一个for语句求出级数的和，最后将和变量s返回。*/

 
}
void main()
{ 
  FILE *wf;
  system("CLS");
  printf("%f\n",fun(10));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(10));
  fclose(wf);
/*****************************/
  system("pasue");
}
