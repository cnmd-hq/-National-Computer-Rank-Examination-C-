#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void fun (int array[3][3])
{
  int i,j,k;
  for(i=0;i<3;i++)
	  for(j=i+1;j<3;j++)
	  {
		  k=array[i][j];
		  array[i][j]=array[j][i];
		  array[j][i]=k;
	  }
	  /*要实现矩阵转置，即将右上角数组元素和左下角数组元素对换，本题通过数组元素交换方法，完成矩阵转置操作。
因为对矩阵转置后仍然存回其本身，所以只能循环矩阵中的一个角(本程序是右上半三角)。控制右上半三角的方法是在内层循环中循环变量j从+1或i开始。*/
}
void main()
{
  FILE *wf;
  int i,j;
  int array [3][3]={{100,200,300},{400,500,600},{700,800,900}};
  system("CLS");
  for (i=0;i<3;i++)
     {for (j=0;j<3;j++)
          printf("%7d ",array[i][j]);
      printf("\n ");
     }
  fun(array);
  printf("Converted array:\n ");
  for (i=0;i<3;i++)
     { for (j=0;j<3;j++)
          printf("%7d ",array[i][j]);
       printf("\n ");
     }   
/******************************/
  wf=fopen("out.dat","w");
  for (i=0;i<3;i++)
     { for (j=0;j<3;j++)
          fprintf(wf,"%7d ",array[i][j]);
       fprintf(wf,"\n");
     }   
  fclose(wf);
  system("pause");
/*****************************/
}
