#include  <stdio.h>
#include  <string.h>
#define   N   5
#define   M   8
void fun(char  (*ss)[M])
{ char  *ps[N],*tp;    int  i,j,k;
  for(i=0; i<N; i++) ps[i]=ss[i];
  for(i=0; i<N-1; i++) {
/**********found**********/
    k=  i ;
    for(j=i+1; j<N; j++)
/**********found**********/
       if(strlen(ps[k]) < strlen(ps[j]) ) k=j;
/**********found**********/
    tp=ps[i];  ps[i]=ps[k]; ps[k]= tp ;
	/*���1:��ѭ��ÿѭ��һ�Σ�kӦ���浱ǰ��iֵ,����Ӧ��i��
���2:ʹ����ѭ����iʮ1������ַ������Ƚ��бȽϣ�����Ӧ��ps[j]]��
���3:�˴��������ǽ�������������ֵ,����Ӧ��tp��*/
  }
  printf("\nThe string after sorting by length:\n\n");
  for(i=0; i<N; i++)  puts(ps[i]);
}
void main()
{ char  ch[N][M]={"red","green","blue","yellow","black"};
  int  i;
  printf("\nThe original string\n\n");
  for(i=0;i<N;i++)puts(ch[i]);  printf("\n");
  fun(ch);
  system("pause");
}

