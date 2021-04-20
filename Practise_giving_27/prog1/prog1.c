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
	/*要找出数组中指定数据的下标，首先定义变量'于存放数组下标，然后使用循环语句对数组进行遍历，
	依次取出一个数组元素与指定的数进行比较，若相等，则返回该元素的下标，否则继续判断下一个元素，
	直到数组结束。若数组结束时仍没有找到与指定数相等的元素，则返回-1。*/



}
void main()
{  int a[N]={ 29,13,5,22,10,9,3,18,22,25,14,15,2,7,27},i,x,index;
   printf("a数组中的数据 :\n");
   for(i=0; i<N; i++) printf("%4d",a[i]);  printf("\n");
   printf("给x输入待查找的数 :  ");   scanf("%d",&x);
   index=fun( a, x );
   printf("index=%d\n",index);
   NONO();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
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

