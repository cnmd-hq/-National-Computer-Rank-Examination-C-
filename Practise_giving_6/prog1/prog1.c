#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float fun (float h )
{
    int tmp=0;
	tmp=(int)h*1000+5;
	return (float)tmp/1000;
	/*ע��:����Ҫ��h��ֵ�������������������㣬������Ϊ���������������printf("%7.2f"��h)��ֱ�ӵõ������
���������㷨:���Ҫ��ȷ��С�������ĵ�nλ������Ҫ�Ե�n+1λ�������㡣�����ǽ���С������10��n+ 1�η����5��
Ȼ�����10��ǿ��ת����������Ϊ�����ͣ��ٽ���������10��n�η���ͬʱǿ��ת������Ϊ�����͡�*/

}
void main()
{
  FILE *wf;
  float a=0.0;
  system("CLS");
  printf("Enter a: ");
  scanf ("%f",&a);
  printf("The  result : %f\n", fun(a));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(8.32533));
  fclose(wf);
  system("pause");
/*****************************/
}
