#include  <stdio.h>
#include  <stdlib.h>
#define   N   15
void NONO();
int  fun( int *s, int x)
{
	int i;
	for(i=0;i<N;i++)
		if(x==s[i])return i;
	return -1;
	/*Ҫ�ҳ�������ָ�����ݵ��±꣬���ȶ������'�ڴ�������±꣬Ȼ��ʹ��ѭ������������б�����
	����ȡ��һ������Ԫ����ָ���������бȽϣ�����ȣ��򷵻ظ�Ԫ�ص��±꣬��������ж���һ��Ԫ�أ�
	ֱ��������������������ʱ��û���ҵ���ָ������ȵ�Ԫ�أ��򷵻�-1��*/



}
void main()
{  int a[N]={ 29,13,5,22,10,9,3,18,22,25,14,15,2,7,27},i,x,index;
   printf("a�����е����� :\n");
   for(i=0; i<N; i++) printf("%4d",a[i]);  printf("\n");
   printf("��x��������ҵ��� :  ");   scanf("%d",&x);
   index=fun( a, x );
   printf("index=%d\n",index);
   NONO();
}

void NONO()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  FILE *fp, *wf ;
  int i, j, a[10], x, index;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    for(j = 0 ; j < 10 ; j++) {
      fscanf(fp, "%d ", &a[j]);
    }
    fscanf(fp, "%d", &x);
    index = fun(a, x);
    fprintf(wf, "%d\n", index);
  }
  fclose(fp);
  fclose(wf);
  system("pause");
}

