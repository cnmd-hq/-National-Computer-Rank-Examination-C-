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
  /*���1:��ԭ�����֪��av�������ƽ��ֵ����ƽ��ֵ���������������ܺͳ������ĸ������������Ӧ����дs/N��
���2:y���������ʱ���x���飬f(x��>av)�����ǵ�x�����е�������ƽ��ֵʱ��Ӧ�ð���Щ����ƽ��ֵ��������y�����ǰ�벿�֣�����˿�Ӧ����y[++]��
���3:�˿ձ�����x�ز�����ʲôʱ��x���е���Ҫ��ֵ��y���飬�������֪�˿�ֻ����д-1��*/
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

