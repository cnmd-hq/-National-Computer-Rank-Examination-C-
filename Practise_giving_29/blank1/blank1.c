#include   <stdio.h>
#define   N    100 
void  fun( int *a , int  n )
{  int  i, t;
   for( i=0; i<n; i++ )
/**********found**********/
      a[i]=0;
   i=0;  
/**********found**********/
   t=1;
   while( i<n )
   {  a[i]= 1;
      t++;
/**********found**********/
      i=i+t;
	  /*填空1:利用循环为数组所有元素赋值为0。
填空2:变量t为间隔数，在循环过程中每次加1，设定初始值为1。
填空3:下—个数组下标为本次的下标加间隔数加1的值。*/
   }
}
void main()
{  int  a[N], i, n=30;
   fun( a, n);
   for(i=0; i<n; i++)
     if( a[i]==1 )  printf("不安全的洞号是 :   %d\n",i );
   system("pause");
}

