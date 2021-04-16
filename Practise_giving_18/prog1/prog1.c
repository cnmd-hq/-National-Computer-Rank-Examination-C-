#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void fun(int m,int k,int xx[])
{
	int i,j,n;
	for(i=m+1,n=0;n<k;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)break;
		if(j>=i)
			xx[n++]=i;
		/*本题主要考查素数的判定方法，如果一个数不能被除了1和其自身以外的数整除，
		则这个数为素数。本程序使用循环语句控制需要判断的数，在循环体中判断该数是否为素数，若是则存入数组xx中。*/
	}
   
}
void main()
{
  FILE *wf;
  int m,n,zz[1000];
  system("CLS");
  printf("\nPlease enter two integers: ");
  scanf("%d%d",&m,&n);
  fun(m, n, zz);
  for(m=0;m<n;m++)
     printf("%d ",zz[m]);
  printf("\n ");
/******************************/
  wf=fopen("out.dat","w");
  fun(17,5,zz);
  for(m=0;m<5;m++)
     fprintf(wf,"%d ",zz[m]);
  fclose(wf);
/*****************************/
  system("pause");

}
