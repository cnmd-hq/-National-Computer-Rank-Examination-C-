#include <stdio.h>
/**********found**********/
void fun ( char *s, int *a, int *b )
{
  while ( *s )
  {  if ( *s >= 'A' && *s <= 'Z' )
/**********found**********/
       *a=*a+1 ;
     if ( *s >= 'a' && *s <= 'z' )
/**********found**********/
        *b=*b+1;
     s++;
	 /*(1���������е���fun���������fun(s��&upper��&lower)��֪�������ĺ���������Ϊָ�����ʽ,������*a��*b��
(2)*a��������������¼��д��ĸ�ĸ������˴��������Ƕ�*a�ۼ�1�����Դ˴�Ӧ��Ϊ*a=*a+1��
(3)*b��������������¼Сд��ĸ�ĸ������˴��������Ƕ�*�ۼ�1�����Դ˴�Ӧ��Ϊ*��=*b��1��*/
  }
}

void main( )
{  char   s[100];  int   upper = 0, lower = 0 ;
   printf( "\nPlease a string :  " );  gets ( s );
   fun ( s,  & upper, &lower );
   printf( "\n upper = %d  lower = %d\n", upper, lower );
   system("pause");
}

