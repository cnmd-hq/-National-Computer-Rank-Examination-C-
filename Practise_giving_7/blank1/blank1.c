#include  <stdlib.h>
#include  <stdio.h>
#define   N  20
void  fun( int  *a)
{ int  i, x, n=0;
  x=rand()%20;
/**********found**********/
  while (n<N)
  {  for(i=0; i<n; i++ )
/**********found**********/
         if( x==a[i] ) 
		    break;
/**********found**********/
     if( i==n)
		{ a[n]=x; n++; }
     x=rand()%20;
  }
  /*���1:����n���ڴ洢������±꣬Ҫͨ��while����������и�ֵ�����������Ϊ20�����ѭ������ӦΪn<20��
���2:ͨ��һ��forѭ���ж�x�Ƿ����������Ѵ��Ԫ���ظ������ظ�������forѭ��������
���3:��forѭ������break�������ģ���x�������е�Ԫ���ظ�����ʱ��ȻС��n;��forѭ������Ϊѭ������i������ĳֵ��
����������ѭ�����������ģ�˵��x��ֵ�������е�Ԫ�ز��ظ������ʱ��ֵ����n��*/
}
void main()
{ int  x[N]={0} ,i;
  fun( x );
  printf("The result :  \n");
  for( i=0; i<N; i++ )
  { printf("%4d",x[i]);
    if((i+1)%5==0)printf("\n");
  }
  printf("\n\n");
  system("pause");
}

