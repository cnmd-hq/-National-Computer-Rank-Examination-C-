#include  <stdio.h>
#define   N   7
/**********found**********/
void fun(int (*a)[N])
{ int  i,j,k,m;
  if(N%2==0) m=N/2 ;
  else       m=N/2+1;
  for(i=0; i<m; i++) {
/**********found**********/
     for(j=i; j<N-i; j++)
        a[i][j]=a[N-i-1][j]=i+1;
     for(k=i+1; k<N-i; k++)
/**********found**********/
        a[k][i]=a[k][N-i-1]=i+1;
	 /*���1:���⿼�����βε�ȷ������������ʱ��ʵ�ε�ֵ�����βΣ�ʵ�κ��β��ǡ�����Ӧ��,��˸ÿ�Ӧ����д[N]��
���2:�ڶ���forѭ����a��]��a[N-i-1][]��ʾ��һ�к����һ������aN][N]��ֵ������˿�Ӧ����дi��
���3:������forѭ���������aN][N]��ÿһ�е�ֵ����˴˿�Ӧ����дi+1��*/
  }
}
void main()
{ int  x[N][N]={0},i,j;
  fun(x);
  printf("\nThe result is:\n");
  for(i=0; i<N; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
	 system("pause");
  }
}

