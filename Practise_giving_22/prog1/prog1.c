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
	/*����Ҫ�����ĺͣ��ɶ���ʽ����ʽ��֪��Ӧʹ��ѭ�����ʵ�֣�ѭ����ͨ��Ϊ1/n(n+1)��
	���������ȶ����˺ͱ�����ѭ��������Ȼ������һ��for�����������ĺͣ���󽫺ͱ���s���ء�*/

 
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
