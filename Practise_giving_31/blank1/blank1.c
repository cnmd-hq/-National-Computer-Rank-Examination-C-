#include  <stdio.h>
double fun(int  n)
{ int  i, k;    double  s, t;
  s=0;
/**********found**********/
  k=1;
  for(i=1; i<=n; i++) {
/**********found**********/
    t=i*2;
    s=s+k*(2*i-1)*(2*i+1)/(t*t);
/**********found**********/
    k=k*(-1);
	/*���1:��fun��������ṹ���Կ���k�������Ǹ�ֵ�����ۼӸ���ǰ�ߵ������ţ����ڵ�һ�������ģ���˸���k��ֵΪ1��
���2:�˿���һ�еı��ʽk*(2*i-1)*(2*i+1)(t*t)�ۼӵ�ͨ��kΪ�����ţ�����Ŀ�й�ʽ��֪t=2*i��
���3:����ͨ��ǰ�ߵ�������ÿ�ζ�Ҫ�����仯�����k=k*(-1)��*/
  }
  return  s;
}
void main()
{ int  n=-1;
  while(n<0)
  { printf("Please input(n>0): ");  scanf("%d",&n);  }
  printf("\nThe result is: %f\n",fun(n));
  system("pause");
}

