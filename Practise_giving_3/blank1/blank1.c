#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
double fun(double  x[],double  *av)
{ int  i,j;    double  d,s;
  s=0;
  for(i=0; i<N; i++)  s = s +x[i];
/**********found**********/
  *av=s/N;
  d=32767;
  for(i=0; i<N; i++)
    if(x[i]<*av && *av - x[i]<=d){
/**********found**********/
      d=*av-x[i]; 
	  j=i;
	 }
/**********found**********/
  return  x[j];
  /*填空1:从原程序中可以看出*av代表的是平均值，而s/N表示的就是平均值，因此本空应该填*av。
填空2:f语句来判断找最接近平均值的数，因而此空应该填i。
填空3:题目要求将小于平均值且最接近平均值的数作为函数返回，而j表达的是最接近平均值的数在数组中的下标，因而本空应该填写x[]。*/
}
void main()
{ int  i;    double  x[N],av,m;
  for(i=0; i<N; i++){ x[i]=rand()%50; printf("%4.0f ",x[i]);}
  printf("\n");
  m=fun(x,&av);
  printf("\nThe average is: %f\n",av);
  printf("m=%5.1f ",m);
  printf("\n");
  system("pause");
}

