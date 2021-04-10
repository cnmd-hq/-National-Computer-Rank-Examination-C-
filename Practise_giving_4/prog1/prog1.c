#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define  N  5
double fun (int w[][N])
{
 int i,j,k=0;
 double s=0.0;
 for (i=0;i<N;i++)
	 for(j=0;j<N;j++)
		 if(i==0||i==N-1||j==0||j==N-1)
		 {
			 s=s+w[i][j];
		     k++;
		 }
		 return s/k;
/*本题要求计算二维数组周边元素的平均值，for循环语句控制循环过程，if条件语句根据数组元素的下标判断该元素是否为二维数组的周边元素。
本题采用逐一判断的方式，周边元素的规律为下标中有一个是o或N-1，所以只要下标中有一个为o或N-1，那么它一定是周边元素。计算周边元素
个数的方式是当给sum累加一个值时，k也加1。*/
}
void main()
{
  FILE *wf;
  int a[N][N]={0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
  int i, j;
  double s;
  system("CLS");
  printf("*****The array*****\n ");
  for (i=0; i<N; i++)
    { for (j=0;j<N;j++)
         {printf("%4d ",a[i][j]);}
      printf("\n ");
    }
  s=fun(a);
  printf("*****THE RESULT*****\n ");
  printf("The sum is : %lf\n ",s);
/******************************/
  wf=fopen("out.dat","w");
  fprintf (wf,"%lf",s);
  fclose(wf);
/*****************************/
  system ("pause");
}
