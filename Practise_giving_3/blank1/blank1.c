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
  /*���1:��ԭ�����п��Կ���*av�������ƽ��ֵ����s/N��ʾ�ľ���ƽ��ֵ����˱���Ӧ����*av��
���2:f������ж�����ӽ�ƽ��ֵ����������˿�Ӧ����i��
���3:��ĿҪ��С��ƽ��ֵ����ӽ�ƽ��ֵ������Ϊ�������أ���j��������ӽ�ƽ��ֵ�����������е��±꣬�������Ӧ����дx[]��*/
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

