#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  N  5
void fun(int a[][N], int m)
{
 int i,j;
 for(j=0;j<N;j++)
	 for(i=0;i<=i;i++)
		 a[i][j]=a[i][j]*m;
 /*本程序实现将矩阵中右上半三角元素中的值乘以m，使用循环语句遍历数组元素，第1个循环用于控制行坐标，第2个循环用于控制列下标。*/
}
void main()
{ 
  int a[N][N],m, i, j;
  FILE *out;
  printf("*****The array*****\n");
  for(i=0;i<N;i++)
        { for(j=0;j<N;j++)
        	{a[i][j]=rand()%20;
         	printf("%4d", a[i][j]);
        	}
        printf("\n");
    	}
  m=rand()%4;
  printf("m=%4d\n",m);
  fun(a,m);
  printf("THE RESULT\n"); 
  for(i=0;i<N;i++)
     { for(j=0;j<N;j++) 
          printf("%4d",a[i][j]);
       printf("\n");
     }
  /******************************/
  out=fopen("out.dat","w");
  for(i=0;i<N;i++)
    	for(j=0;j<N;j++)
		a[i][j]=i*j;
  fun(a,8);
  for(i=0;i<N;i++)
  { 	for(j=0;j<N;j++)
		fprintf(out,"%4d",a[i][j]);
	fprintf(out,"\n");
  }
  fclose(out);
  system("pause");
  /******************************/
}
