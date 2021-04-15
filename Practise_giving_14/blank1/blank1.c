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
	/*填空1:变量k在函数体fun中已经使用，但在函数体中没有定义，肯定是在函数的形参中定义的,所以应填k。
填空2:数组共N列，所以应填N。
填空3:这部分语句实现的功能是变量值的交换，所以应填a[k]间。*/
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

