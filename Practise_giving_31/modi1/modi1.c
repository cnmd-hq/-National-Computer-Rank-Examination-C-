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
  /*����fun�Ĺ������ж�m�Ƿ�Ϊ����:m��2��ʼ��Ϊ����������mȡ�࣬��������һ����ʹ������Ϊ0����mΪ������
  ����Ĵ�������ifmһk)����е��߼����ʽд���˸�ֵ��䡣*/
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

