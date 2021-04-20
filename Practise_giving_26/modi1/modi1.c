#include  <stdio.h>
#include  <stdlib.h>
#define   N  20
int  fun( int *b )
{
/**********found**********/
   int  t[N] ,i, num=0;
   for(i=0; i<N; i++)
     if(b[i]>=10)
/**********found**********/
       t[num++]=b[i];
/**********found**********/
    for(i=0; i<num; i++)
      b[i]=t[i];
    return( num );
	/*(1）元素num存放不小于10的元素的个数，应将其初始化为0。
(2）将数组b中不小于10的元素存入数组t中，同时使数组t的下标加1。
(3）语法错误，没有nun这个变量，应该为num。*/
}
void main()
{  int  a[N],i,num;
   printf("a数组中的数据 :\n");
   for(i=0;i<N ;i++) {a[i]=rand()%21; printf("%4d",a[i]);}
   printf("\n");
   num=fun(a);
   for(i=0;i<num ;i++) printf("%4d",a[i]);
   printf("\n");
   system("pause");
}

