#include  <stdio.h>
void fun( int  m, int  a[10])
{  int  i;
  for (i=0; i<10; i++)
/**********found**********/
    a[i] = 0;
  while (m > 0)
  {
/**********found**********/
     i = m%10;
     a[i]++;
/**********found**********/
     m = m/10;
	 /*���1:����a��10��Ԫ�ظ�ֵΪ0��
���2:m%10�ɵõ���m�����һλ���֡����3: m/10��ʹ���ֽض̣���ȥ�����һλ��*/
  }
}
void main()
{  int  m,  a[10],i;
   printf("������һ������ :  ");   scanf("%d", &m);
   fun(m, a);
   for (i=0; i<10; i++)   printf("%d,",a[i]);  printf("\n");
   system("pause");
}

