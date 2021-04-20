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
   /*填空1:利用选择算法排序，先指定一个元素为最小，用这个数与其后的所有数进行比较，若找小于此数，则进行替换。此处考查替换操作。
填空2:元素mid存放中间位置的数，数组长度为9，因此中间元素数为b[4]。
填空3:遍历数组，当元素小于中间位置的数（即mid）时，进行替换。*/
}
void main()
{  int  i, x[N]={1,5,7,23,87,5,8,21,45};
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\nThe mid data is: %d\n",fun(x));
   for(i=0; i<N; i++)  printf("%d ",x[i]);
   printf("\n");
   system("pause");
}

