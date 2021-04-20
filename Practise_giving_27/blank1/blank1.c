#include  <stdio.h>
#include  <stdlib.h>
void fun( int *a,  int n )
{  int  i;
   for(i=0; i<n; i++)
   {
/**********found**********/
     if( i%5==0 )
/**********found**********/
           printf("\n");
/**********found**********/
      printf("%d  ",a[i]);
	  /*填空1:每行输出5个数,即当下标值能整除5时换行。填空2:输出换行符'n'。
填空3:输出数组元素。*/
   }
}
void main()
{  int  a[100]={0}, i,n;
   n=22;
   for(i=0; i<n;i++) a[i]=rand()%21;
   fun( a, n);
   printf("\n");
   system("pause");
}

