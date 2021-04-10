#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
double fun(double  *x)
{ int  i, j;    double  s, av, y[N];
  s=0;
  for(i=0; i<N; i++)  s=s+x[i];
/**********found**********/
  av=s/N;
  for(i=j=0; i<N; i++)
    if( x[i]>av ){
/**********found**********/
      y[j++]=x[i];
	  x[i]=-1;}
  for(i=0; i<N; i++)
/**********found**********/
    if( x[i]!= -1) y[j++]=x[i];
  for(i=0; i<N; i++)x[i] = y[i];
  return  av;
  /*填空1:由原程序可知，av代表的是平均值，而平均值的求法是所有数的总和除以数的个数，因而本空应该填写s/N。
填空2:y数组代表暂时存放x数组，f(x门>av)表达的是当x数组中的数大于平均值时，应该把这些大于平均值的数放在y数组的前半部分，因而此空应该填y[++]。
填空3:此空表明当x回不等于什么时，x团中的数要赋值给y数组，由题意可知此空只能填写-1。*/
}
void main()
{ int  i;     double  x[N];
  for(i=0; i<N; i++){ x[i]=rand()%50; printf("%4.0f ",x[i]);}
  printf("\n");
  printf("\nThe average is: %f\n",fun(x));
  printf("\nThe result :\n",fun(x));
  for(i=0; i<N; i++)  printf("%5.0f ",x[i]);
  printf("\n");
  system("pause");
}

