#include  <stdio.h>
#define   M   3
#define   N   4
void fun(int  (*a)[N])
{ int  i=0,j,find=0,rmax,c,k;
  while( (i<M) && (!find))
  {  rmax=a[i][0];  c=0;
     for(j=1; j<N; j++)
       if(rmax<a[i][j]) {
/**********found**********/
         rmax=a[i][j]; c=j; }
     find=1; k=0;
     while(k<M && find) {
/**********found**********/
       if (k!=i && a[k][c]<=rmax)  find=0 ;
       k++;
     }
     if(find) printf("find: a[%d][%d]=%d\n",i,c,a[i][c]);
/**********found**********/
      i++ ;
	  /*�������ھ������ҳ������������������С���Ǹ�Ԫ�ء�
	  ���1:�ҳ���������������������������j������c�У�����Ӧ��j��
���2:ʹ��whileѭ�����Ϳ��Ʊ���find����������������е���С������ô��find��o������Ӧ��0��
���3:i��while�Ŀ��Ʊ���������ÿ��һ��ѭ��������ֵҪ��1������Ӧ��i��+��*/
  }
  if(!find) printf("not found!\n");
}
void main()
{ int  x[M][N],i,j;
  printf("Enter number for array:\n");
  for(i=0; i<M; i++)
    for(j=0; j<N; j++) scanf("%d",&x[i][j]);
  printf("The array:\n");
  for(i=0; i<M; i++)
  {  for(j=0; j<N; j++) printf("%3d",x[i][j]);
     printf("\n\n");
  }
  fun(x);
  system("pause");
}

