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
	 /*���1:av����ƽ��ֵ�����⿼����.������ƽ��ֵ����˱���Ӧ����дx/N��
���2:ͨ��forѭ����ifo���ҵ�x[�б�ƽ��ֵС������������Щֵ��ֵ��y�̣���˱���Ӧ����д'+����++j��
���3:ͨ��whileѭ����䣬��x���б�ƽ��ֵ�������������y�ĺ�벿�֣���˱���Ӧ����д��+����+ti��*/
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

