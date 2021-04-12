#include  <stdio.h>
#define  N  4
void fun(int  (*a)[N], int  *b)
{ int  i,j;
  for(i=0; i<N; i++) {
/**********found**********/
    b[i]=a[0][i];
    for(j=1; j<N; j++)
/**********found**********/
        if(b[i]< a[j][i])
		   b[i]=a[j][i];
	/*填空1:数组b用于存放每列元素中的最大值，首先将第例的第一个数赋给b[i]，然后用b回与其他数进行比较,因此此空应填a[0][i]。
填空2:if保件表达式表示当bi]小于a[j][i]时，就把a[i]团的值赋给b团，因此此空应该填<。
填空3:fun函数的调用，通过fun(int (*a)[N].int *b)可知，此空应该填x,y.*/
  }
}
void main()
{ int  x[N][N]={ {12,5,8,7},{6,1,9,3},{1,2,3,4},{2,8,4,3} },y[N],i,j;
  printf("\nThe matrix :\n");
  for(i=0;i<N; i++)
  {  for(j=0;j<N; j++) printf("%4d",x[i][j]);
     printf("\n");
  }
/**********found**********/
  fun(x,y);
  printf("\nThe result is:");
  for(i=0; i<N; i++)  printf("%3d",y[i]);
  printf("\n");
  system("pause");
}

