#include  <stdio.h>
#define    N    9
int fun(int  x[])
{  int  i,j,k,t,mid,b[N];
   for(i=0;i<N;i++) b[i]=x[i];
   for(i=0;i<=N/2;i++)
   {  k=i;
      for(j=i+1;j<N;j++) if(b[k]>b[j])  k=j;
      if(k != i )
      {  
/**********found**********/
        t=b[i]; b[i]=b[k]; b[k]=t;
      }
   }
/**********found**********/
   mid=b[N/2];
   for(i=0; i<N; i++)
/**********found**********/
     if(x[i] < mid) x[i]=mid;
   return  mid;
   /*���1:����ѡ���㷨������ָ��һ��Ԫ��Ϊ��С������������������������бȽϣ�����С�ڴ�����������滻���˴������滻������
���2:Ԫ��mid����м�λ�õ��������鳤��Ϊ9������м�Ԫ����Ϊb[4]��
���3:�������飬��Ԫ��С���м�λ�õ�������mid��ʱ�������滻��*/
}
void main()
{  int  i, x[N]={1,5,7,23,87,5,8,21,45};
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\nThe mid data is: %d\n",fun(x));
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\n");
   system("pause");
}

