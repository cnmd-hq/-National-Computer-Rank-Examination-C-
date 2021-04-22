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
	 /*填空1:数组a的10个元素赋值为0。
填空2:m%10可得到数m的最后一位数字。填空3: m/10可使数字截短，即去掉最后一位。*/
  }
}
void main()
{  int  m,  a[10],i;
   printf("请输入一个整数 :  ");   scanf("%d", &m);
   fun(m, a);
   for (i=0; i<10; i++)   printf("%d,",a[i]);  printf("\n");
   system("pause");
}

