#include   <stdio.h>
#define   N    100 
void  fun( int *a , int  n )
{  int  i, t;
   for( i=0; i<n; i++ )
/**********found**********/
      a[i]=0;
   i=0;  
/**********found**********/
   t=1;
   while( i<n )
   {  a[i]= 1;
      t++;
/**********found**********/
      i=i+t;
	  /*���1:����ѭ��Ϊ��������Ԫ�ظ�ֵΪ0��
���2:����tΪ���������ѭ��������ÿ�μ�1���趨��ʼֵΪ1��
���3:�¡��������±�Ϊ���ε��±�Ӽ������1��ֵ��*/
   }
}
void main()
{  int  a[N], i, n=30;
   fun( a, n);
   for(i=0; i<n; i++)
     if( a[i]==1 )  printf("����ȫ�Ķ����� :   %d\n",i );
   system("pause");
}

