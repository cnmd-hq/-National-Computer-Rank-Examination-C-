#include  <stdio.h>
#define   N   3
#define   M   4
/**********found**********/
void fun(int (*a)[N], int k)
{ int i,temp ;
/**********found**********/
  for(i = 0 ; i < N ; i++)
  { temp=a[0][i] ;
/**********found**********/
    a[0][i] = a[k][i] ;
    a[k][i] = temp ;
	/*���1:����k�ں�����fun���Ѿ�ʹ�ã����ں�������û�ж��壬�϶����ں������β��ж����,����Ӧ��k��
���2:���鹲N�У�����Ӧ��N��
���3:�ⲿ�����ʵ�ֵĹ����Ǳ���ֵ�Ľ���������Ӧ��a[k]�䡣*/
  }
}
void main()
{ int x[M][N]={ {1,2,3},{4,5,6},{7,8,9},{10,11,12} },i,j;
  printf("The array before moving:\n\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++) printf("%3d",x[i][j]);
     printf("\n\n");
  }
  fun(x,2);
  printf("The array after moving:\n\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++) printf("%3d",x[i][j]);
     printf("\n\n");
	 system("pause");
  }
}

