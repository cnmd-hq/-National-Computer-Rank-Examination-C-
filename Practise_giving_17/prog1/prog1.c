#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void fun (int x, int pp[], int *n)
{
	int i,j=0;
	for(i=1;i<=x;i+=2)
		if(x%i==0)
			pp[j++]=i;
	*n=j;
	/*本题题干信息是:能整除x且不是偶数的所有整数。循环语句中变量i认1开始且每次增2，所以始终是奇数。
整除的方法，在前面已经讲过多次，这里就不再赘述了。对于本题目要求的不是偶数的判定方法，即该数对2求余不为0。
除以上方法外，还可以通过for循环语句直接把偶数筛出去，确保参与操作的数均为奇数。*/
}

void main ()
{ 
  FILE *wf;
  int  x,aa[1000], n, i ;
  system("CLS");
  printf("\nPlease enter an integer number : \n ") ;
  scanf ("%d", &x) ;
  fun (x, aa, &n) ;
  for (i=0 ; i<n ; i++)
      printf ("%d ", aa [i]);
  printf ("\n ") ;
/******************************/
  wf=fopen("out.dat","w");
  fun (30, aa, &n) ;
  for (i=0 ; i<n ; i++)
      fprintf (wf,"%d ", aa [i]);
  fclose(wf);
/*****************************/
  system("pause");
}
