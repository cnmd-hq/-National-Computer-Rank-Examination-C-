#include  <stdio.h>
#define   N   3
int fun(int  (*a)[N])
{ int  i,j,m1,m2,row,colum;
  m1=m2=0;
  for(i=0; i<N; i++)
  { j=N-i-1;  m1+=a[i][i];  m2+=a[i][j];  }
  if(m1!=m2) return  0;
  for(i=0; i<N; i++) {
/**********found**********/
     row=colum= 0;
     for(j=0; j<N; j++)
     {  row+=a[i][j];  colum+=a[j][i];  }
/**********found**********/
     if( (row!=colum) || (row!=m1) ) return 0;
  }
/**********found**********/
  return  1;
  /*填空1:本题考查为变量赋初值，在这里row+=a闭]代表是每行的总、和,colum+=a[]间代表的是每列的总和，因而row，colum在初始化时应该为零，此空应该填0。
填空2:本题考查了if条件语句，此句到断代表每行的总和与列是否相等，每行的总和是否与对角线的总和相等，两者若有一个不成立，即返回0，因而此空应该填写|。
填空3:题目要求若矩阵是“幻方”，则函数返回值为1，因而此空应该填写1。*/
}
void main()
{ int  x[N][N],i,j;
  printf("Enter number for array:\n");
  for(i=0; i<N; i++)
    for(j=0; j<N; j++)  scanf("%d",&x[i][j]);
  printf("Array:\n");
  for(i=0; i<N; i++)
  {  for(j=0; j<N; j++)  printf("%3d",x[i][j]);
     printf("\n");
  }
  if(fun(x)) printf("The Array is a magic square.\n");
  else printf("The Array isn't a magic square.\n");
  system("pause");
}

