#include <stdlib.h>
#include <stdio.h>
#define   N   10
double fun(double  x[],double  *y)
{ int  i,j;    double  av;
/**********found**********/
  av=0.0;
/**********found**********/
  for(i=0; i<N; i++)  
	  av=av+x[i]/10;
  for(i=j=0; i<N; i++)
/**********found**********/
    if(x[i]>av)  y[j++]= x[i];
  y[j]=-1;
  return  av;
  /*填空1:通过读上面的程序可以看出此空考的是给变量赋初值，av代表的是平均值，因此av的初值应该是0.0。
填空2:通过for循环可知，此空代表求平均值，因此应该填写x[i]/N。
填空3:先把大于平均值的数放在形参y所指数组中，然后使下标值加1，因此此空应该填j++。*/
}
void main()
{ int  i;    double  x[N],y[N];
  for(i=0; i<N; i++){ x[i]=rand()%50; printf("%4.0f ",x[i]);}
  printf("\n");
  printf("\nThe average is: %f\n",fun(x,y));
  for(i=0; y[i]>=0; i++)  printf("%5.1f ",y[i]);
  printf("\n");
  system("pause");
}

