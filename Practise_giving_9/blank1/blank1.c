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
	 /*填空1:本题考查了形参的确定。参数传递时将实参的值赋给形参，实参和形参是——对应的,因此该空应该填写[N]。
填空2:第二重for循环中a回]和a[N-i-1][]表示第一行和最后一行数组aN][N]的值，因而此空应该填写i。
填空3:第三重for循环代表的是aN][N]中每一列的值，因此此空应该填写i+1。*/
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

