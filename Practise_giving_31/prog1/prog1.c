#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void fun(int a[],int n, int *max, int *d)
{
	int i;
	*max=a[0];
	*d=0;
	for(i=0;i<n;i++)
		if(*max<a[i])
		{
			*max=a[i];
			*d=i;
		}
		/*�ó��򿼲������ֵ����Ҫ�����������:
for(i=0ji<n;i++)/*������Ԫ�ط���ָ��max��ָ�ĵ�Ԫ�����Ԫ�ص��±����ָ��d��ָ�ĵ�Ԫ*)if(*max<a[i)
{*max=a��;*d=i��}*/
  
}
void main()
{ 
  FILE *wf;
  int i, x[20], max,  index, n=10;
  int y[20]={4,2,6,8,11,5};
  srand((unsigned)time(NULL));
  for(i=0;i<n;i++)
    {
     x[i]=rand()%50; 
     printf("%4d",x[i]);    /*���һ���������*/
    }
  printf("\n");
  fun(x,n,&max,&index);
  printf("Max=%5d,Index=%4d\n",max,index);
/******************************/
  wf=fopen("out.dat","w");
  fun(y,6,&max,&index);
  fprintf(wf,"Max=%5d,Index=%4d",max,index);
  fclose(wf);
/*****************************/
  system("pause");
}
