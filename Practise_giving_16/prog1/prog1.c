#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fun(int score[],int m, int below[])
{
	int i,j=0;
	double av=0.0;
	for(i=0;i<m;i++)
		av=av+score[i]/m;
	for(i=0;i<m;i++)
		if(score[i]<av)
			below[j++]=score[i];
	return j;
    /*Ҫ�������ƽ���ֵ�����������Ӧ�����ƽ���֣�Ȼ��ͨ��forѭ������if��������ҳ�����ƽ���ֵķ�����
	�����1��ѭ�������������ƽ����av����2��ѭ�����������ҳ�����ƽ���ֵĳɼ���¼������below�����С�*/                                                     
}
void main()
{
  FILE *wf;
  int i, n, below[9];
  int score[9]={10,20,30,40,50,60,70,80,90};
  system("CLS");
  n=fun(score, 9, below);
  printf("\nBelow the average score are: ");
  for(i=0;i<n;i++)  
     printf("%d ",below[i]);
/******************************/
  wf=fopen("out.dat","w");
  for(i=0;i<n;i++)  
     fprintf(wf,"%d ",below[i]);
  fclose(wf);
/*****************************/
  system("pause");
}
