#include  <stdio.h>
#define   M   3
#define   N   4
void fun(int  (*a)[N])
{ int  i=0,j,find=0,rmax,c,k;
  while( (i<M) && (!find))
  {  rmax=a[i][0];  c=0;
     for(j=1; j<N; j++)
       if(rmax<a[i][j]) {
/**********found**********/
         rmax=a[i][j]; c=j; }
     find=1; k=0;
     while(k<M && find) {
/**********found**********/
       if (k!=i && a[k][c]<=rmax)  find=0 ;
       k++;
     }
     if(find) printf("find: a[%d][%d]=%d\n",i,c,a[i][c]);
/**********found**********/
      i++ ;
	  /*本题是在矩阵中找出在行上最大、在列上最小的那个元素。
	  填空1:找出行上最大的数，并将该数的列数j保存在c中，所以应填j。
填空2:使用while循环语句和控制变量find，如果该数不是列中的最小数，那么把find置o，所以应填0。
填空3:i是while的控制变量，所以每做一次循环，该数值要加1，所以应填i计+。*/
  }
  if(!find) printf("not found!\n");
}
void main()
{ int  x[M][N],i,j;
  printf("Enter number for array:\n");
  for(i=0; i<M; i++)
    for(j=0; j<N; j++) scanf("%d",&x[i][j]);
  printf("The array:\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++) printf("%3d",x[i][j]);
     printf("\n\n");
  }
  fun(x);
  system("pause");
}

