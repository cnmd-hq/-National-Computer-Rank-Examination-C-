#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
int fun(float x[], int n)
/************found************/
   {int j, c=0; float xa=0.0;
   for (j=0; j<n; j++)
     xa += x[j]/n;
   printf("ave =%f\n",xa);
   for (j=0; j<n; j++)
/************found************/
     if (x[j] >= xa)
       c++;
   return c;
   /*1)�������ؿ��鿼����C���Ի����﷨�Լ��Ƚ�����������������
   (2)�����еĵ�һ������:��C�����У�Ӧ�ɶԳ��֣����Գ����е����"int j,c=O:float xa=0.0;"
   Ӧ��Ϊ"{int j,c=Ofloat xa=0.0;"����ͬ���õ����;
�����еĵڶ�������:��c�����У��жϴ��ڻ���ڵ������ӦΪ>=�����Գ����е����"xi=>xa)"Ӧ��Ϊ"f(xi>=xa)"����ͬ���õ���䡣*/
}
void main ()
{float x[100] = {193.199, 195.673, 195.757, 196.051, 196.092, 196.596, 196.579, 196.763};
 system("cls");   
 printf("%d\n", fun (x, 8));
 system("pause");
}
