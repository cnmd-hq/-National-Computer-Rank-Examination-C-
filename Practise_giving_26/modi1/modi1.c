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
	/*(1��Ԫ��num��Ų�С��10��Ԫ�صĸ�����Ӧ�����ʼ��Ϊ0��
(2��������b�в�С��10��Ԫ�ش�������t�У�ͬʱʹ����t���±��1��
(3���﷨����û��nun���������Ӧ��Ϊnum��*/
}
void main()
{  int  a[N],i,num;
   printf("a�����е����� :\n");
   for(i=0;i<N ;i++) {a[i]=rand()%21; printf("%4d",a[i]);}
   printf("\n");
   num=fun(a);
   for(i=0;i<num ;i++) printf("%4d",a[i]);
   printf("\n");
   system("pause");
}

