#include  <stdio.h>
void NONO();
double fun(double  a[ ] , int  n)
{
	double sum=0,max,min;
	int i;
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
	sum=sum-max-min;
	return(sum/(n-2));
	/*设定三个变量sum存放合值，max存放最大值，min存放最小值。max和min都赋为数组中第一个元素的值。
	利用循环将数组中元素累加到sum中，并找出最大值和最小值,sum值减去最大值和最小值。函数返回sum除以元素个数-2得平均值。*/



}

void main()
{  double  b[10],  r;    int  i;
    printf("输入10个分数放入b数组中 :  ");
    for (i=0; i<10; i++)   scanf("%lf",&b[i]);
    printf("输入的10个分数是 :  ");
    for (i=0; i<10; i++)   printf("%4.1lf ",b[i]);    printf("\n");
    r = fun(b, 10);
    printf("去掉最高分和最低分后的平均分 :  %f\n", r );
    NONO();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, j ;
  double b[10], r ;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    for(j = 0 ; j < 10 ; j++) {
      fscanf(fp, "%lf ", &b[j]) ;
    }
    r = fun(b, 10) ;
    fprintf(wf, "%f\n", r) ;
  }
  fclose(fp) ;
  fclose(wf) ;
  system("pause");
}

