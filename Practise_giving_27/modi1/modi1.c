#include  <stdio.h>
#define   N   10
int findmid(int  a, int  b, int  c)
{  int  t;
   t = (a>b)?(b>c?b:(a>c?c:a)):((a>c)?a:((b>c)?c:b));
/**********found**********/
   return  t;
}
void fun(int  x[])
{  int  i,a,b,c,t[N];
/**********found**********/
   for(i=0;i<N;i++) t[i]=x[i];
   for(i=0;i<N-2;i++)
   {  a=t[i];b=t[i+1];c=t[i+2];
/**********found**********/
      x[i+1]=findmid(a,b,c);
	  /*(1）函数findmid的功能是找到a、b、c三个数中的中间数，并存放在变量t中，因此应返回t。
	  (2)语法错误,句末缺少分号。
(3）本程序是对数组x进行操作，数组t只是用来暂时存放数组x中的元素，因此此处应为xi计1]一findmid(a,b,c)。*/
   }
}
void main()
{  int  i, x[N]={6,5,7,23,18,5,8,21,45,38};
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\n");
   fun(x);
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\n");
   system("pause");
}

