#include  <stdlib.h>
#include  <stdio.h>
#define   N  20
void  fun( int  *a)
{ int  i, x, n=0;
  x=rand()%20;
/**********found**********/
  while (n<N)
  {  for(i=0; i<n; i++ )
/**********found**********/
         if( x==a[i] ) 
		    break;
/**********found**********/
     if( i==n)
		{ a[n]=x; n++; }
     x=rand()%20;
  }
  /*填空1:变量n用于存储数组的下标，要通过while语句对数组进行赋值，数组的容量为20，因此循环条件应为n<20。
填空2:通过一个for循环判断x是否与数组中已存的元素重复，若重复则跳出for循环结束。
填空3:若for循环是由break语句结束的，则x与数组中的元素重复，此时必然小于n;若for循环是因为循环变量i递增到某值，
而不再满足循环条件结束的，说明x的值与数组中的元素不重复，则此时的值等于n。*/
}
void main()
{ int  x[N]={0} ,i;
  fun( x );
  printf("The result :  \n");
  for( i=0; i<N; i++ )
  { printf("%4d",x[i]);
    if((i+1)%5==0)printf("\n");
  }
  printf("\n\n");
  system("pause");
}

