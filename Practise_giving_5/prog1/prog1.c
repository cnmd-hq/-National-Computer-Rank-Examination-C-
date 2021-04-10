#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define  M  4
#define  N  5
int fun( int a [M][N])
{
	int i,j,sum=0;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			if(i==0||i==M-1||j==0||j==N-1)
				sum+=a[i][j];
	return sum;
  /*本题采用逐─判断的方式,周边元素的规律是，其下标值中一定有一个是0或M-1或N一1。程序中循环语句用来控制数组的行和列，条件语句用来判断数组元素是否为周边元素。*/
}
void main()
{
  FILE *wf;
  int aa[M][N]={{1,3,5,7,9},{2,9,9,9,4},{6,9,9,9,8},{1,3,5,7,0}};
  int i, j, y;
  system("CLS");
  printf ("The original data is :\n ");
  for(i=0; i<M;i++)
     {for (j=0; j<N;j++) 
          printf("%6d ",aa[i][j]);
      printf("\n ");
     }
  y=fun(aa);
  printf("\nThe sun: %d\n ",y);
  printf("\n ");
/******************************/
  wf=fopen("out.dat","w");
  fprintf (wf,"%d",y);
  fclose(wf);
  system("pause");
/*****************************/
}
