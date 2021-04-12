#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
  int i,j,k=0;
  for(i=2;i<=lim;i++)
  {
	  for(j=2;j<i;j++)
		  if(i%j==0)
			  break;
	  if(j>=i)
		  aa[k++]=i;
  }
  return k;
  /*本程序使用for循环语句查找小于lim的所有数，使用内嵌的循环判断语句判断该数是否为素数。在做这道题时，需要重点掌握素数的判定方法:
for(j=2;j<i;j十十)
f%j==0) break;*/
}
void main()
{
  FILE *wf;
  int limit,i,sum;
  int aa[MAX];
  system("CLS");
  printf("输入一个整数:");
  scanf("%d",&limit);
  sum=fun(limit,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         printf("\n ");
      printf("%5d ",aa[i]);
    }
/******************************/
  wf=fopen("out.dat","w");
  sum=fun(15,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         fprintf(wf,"\n");
      fprintf(wf,"%5d ",aa[i]);
    }
  fclose(wf);
/*****************************/
  system("pause");
}
