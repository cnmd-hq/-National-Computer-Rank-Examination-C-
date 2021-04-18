#include <math.h>
#include <stdio.h>
double  fun( int  n)
{
	double sum=0.0;
	int i;
	for(i=21;i<=n;i++)
		if((i%3==0)&&i%7==0)
			sum+=i;
	return sqrt(sum);
	/*本题考查算术运算的算法，首先利用一个for循环判断小于n且能同时被3和7整除的整数，
	并将满足条件的整数累加到sum，之后调用sqrt函数计算sum的平方根，并作为函数的返回值。*/



}

void main()   /* 主函数 */
{  void NONO ();
   printf("s =%f\n", fun ( 1000) );
   NONO();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, n ;
  double s;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%d", &n) ;
    s = fun(n) ;
    fprintf(wf, "%f\n", s) ;
  }
  fclose(fp) ;
  fclose(wf) ;
  system("pause");
}

