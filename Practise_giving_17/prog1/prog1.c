#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void fun (int x, int pp[], int *n)
{
	int i,j=0;
	for(i=1;i<=x;i+=2)
		if(x%i==0)
			pp[j++]=i;
	*n=j;
	/*���������Ϣ��:������x�Ҳ���ż��������������ѭ������б���i��1��ʼ��ÿ����2������ʼ����������
�����ķ�������ǰ���Ѿ�������Σ�����Ͳ���׸���ˡ����ڱ���ĿҪ��Ĳ���ż�����ж���������������2���಻Ϊ0��
�����Ϸ����⣬������ͨ��forѭ�����ֱ�Ӱ�ż��ɸ��ȥ��ȷ���������������Ϊ������*/
}

void main ()
{ 
  FILE *wf;
  int  x,aa[1000], n, i ;
  system("CLS");
  printf("\nPlease enter an integer number : \n ") ;
  scanf ("%d", &x) ;
  fun (x, aa, &n) ;
  for (i=0 ; i<n ; i++)
      printf ("%d ", aa [i]);
  printf ("\n ") ;
/******************************/
  wf=fopen("out.dat","w");
  fun (30, aa, &n) ;
  for (i=0 ; i<n ; i++)
      fprintf (wf,"%d ", aa [i]);
  fclose(wf);
/*****************************/
  system("pause");
}
