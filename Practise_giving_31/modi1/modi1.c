#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
int fun(int m)
{ int k=2;
  while (k<=m&&(m%k))
/*************found**************/
        k++ ;
/*************found**************/
  if(m==k)
	  return 1;
  else return 0;
  /*函数fun的功能是判断m是否为素数:m从2开始作为除数，并对m取余，若不存在一个数使得余数为0，则m为素数，
  程序的错误在于ifm一k)语句中的逻辑表达式写成了赋值语句。*/
}
void main()
{ int n;
  system("CLS");
  printf("\nPlease enter n: ");
scanf("%d",&n);
  if(fun(n)) printf("YES\n");
  else printf("NO!\n");
  system("pause");
}

