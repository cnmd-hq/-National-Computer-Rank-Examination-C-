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
  /*填空1:外循环p的值为数组移动的次数，试题要求第k列左移，则需要移动的次数为k，所以应填k。
填空2:矩阵共N列，所以应填N-1。
填空3:临时变量temp中存放的值为数组最左边元素的值,需要把temp放到数组的末尾，即放到a团][N-1]中，所以应填temp。*/
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

