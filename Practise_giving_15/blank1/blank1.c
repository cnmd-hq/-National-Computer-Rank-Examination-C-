#include  <stdio.h>
#define   M   3
#define   N   5
void fun(int  (*a)[N],int  k)
{ int  i,j,p,temp;
/**********found**********/
  for(p=1; p<= k; p++)
     for(i=0; i<M; i++)
     {  temp=a[i][0];
/**********found**********/
        for(j=0; j< N-1 ; j++) a[i][j]=a[i][j+1];
/**********found**********/
        a[i][N-1]= temp;
     }
  /*���1:��ѭ��p��ֵΪ�����ƶ��Ĵ���������Ҫ���k�����ƣ�����Ҫ�ƶ��Ĵ���Ϊk������Ӧ��k��
���2:����N�У�����Ӧ��N-1��
���3:��ʱ����temp�д�ŵ�ֵΪ���������Ԫ�ص�ֵ,��Ҫ��temp�ŵ������ĩβ�����ŵ�a��][N-1]�У�����Ӧ��temp��*/
}
void main( )
{ int  x[M][N]={ {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5} },i,j;
  printf("The array before moving:\n\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
  fun(x,2);
  printf("The array after moving:\n\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
  system("pause");
}

