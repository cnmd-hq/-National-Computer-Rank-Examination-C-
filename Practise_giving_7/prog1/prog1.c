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
	  /*Ҫʵ�־���ת�ã��������Ͻ�����Ԫ�غ����½�����Ԫ�ضԻ�������ͨ������Ԫ�ؽ�����������ɾ���ת�ò�����
��Ϊ�Ծ���ת�ú���Ȼ����䱾������ֻ��ѭ�������е�һ����(�����������ϰ�����)���������ϰ����ǵķ��������ڲ�ѭ����ѭ������j��+1��i��ʼ��*/
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
