#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
double fun(double  *x)
{ int  i, j;    double  av, y[N];
  av=0;
  for(i=0; i<N; i++) 
/**********found**********/ 
	av+=x[i]/N;
  for(i=j=0; i<N; i++)
    if( x[i]<av ){
      y[j]=x[i]; x[i]=-1; 
/**********found**********/
	  j++;
	}
  i=0;
  while(i<N)
  {  if( x[i]!= -1 ) y[j++]=x[i];
/**********found**********/
     i++;
	 /*填空1:av代表平均值，本题考查了.怎样求平均值，因此本空应该填写x/N。
填空2:通过for循环和ifo断找到x[中比平均值小的数，并把这些值赋值给y固，因此本空应该填写'+或者++j。
填空3:通过while循环语句，把x团中比平均值大的数放在数组y的后半部分，因此本空应该填写计+或者+ti。*/
  }
  for(i=0; i<N; i++)x[i] = y[i];
  return  av;
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

