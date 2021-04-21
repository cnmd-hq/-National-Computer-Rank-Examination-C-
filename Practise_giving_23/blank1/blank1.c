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
	/*填空1:外循环每循环一次，k应保存当前的i值,所以应填i。
填空2:使用内循环对i十1后面的字符串长度进行比较，所以应填ps[j]]。
填空3:此处的作用是交换两个变量的值,所以应填tp。*/
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

