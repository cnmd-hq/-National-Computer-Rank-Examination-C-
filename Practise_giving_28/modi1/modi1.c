#include  <stdio.h>
void  fun( int  *s, int  n )
{
/**********found**********/
   int  i,  one=0, zero=0 ;
   for(i=0; i<n; i++)
/**********found**********/
   switch( s[i] )
   {
/**********found**********/
      case  0  :  zero++;break;
      case  1  :  one ++;
		  /*(1)����zero����ͳ������0�ĸ�����Ӧ�����ʼ��Ϊ0��
		  (2)�﷨����switchi���󲻼ӷֺš�
(3��������Ϊ0ʱ������zero��1����ʱӦʹ��break�������switchi��䣬������һ��ѭ��,��������ִ��case 1��䣬ʹ�����ܵó���ȷ�����*/
   }
   printf( "one : %d    zero : %d\n", one,  zero);
}
void main()
{  int  a[20]={1,1,1,0,1,0,0,0,1,0,0,1,1,0,0,1,0,1,0,0}, n=20;
   fun( a,  n );
   system("pause");
}

