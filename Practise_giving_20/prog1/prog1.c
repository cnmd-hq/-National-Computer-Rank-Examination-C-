#include <stdio.h>
float  fun(int m, int n)
{
	float p1=1,p2=1,p3=1;
	int i;
	for(i=1;i<=m;i++)
		p1*=i;
	for(i=1;i<=n;i++)
		p2*=i;
	for(i=1;i<=(m-n);i++)
		p3*=i;
	return p1/(p2*p3);
	/*本题考查循环的使用通过三个for循环分别计算阶乘。其中p1=m!,p2=n! , p3=(m-n)!
o*/
}

void main()   /* 主函数 */
{  void NONO ();
   printf("P=%f\n", fun (12,8));
   NONO();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i, m, n ;
  float s;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%d,%d", &m, &n) ;
    s = fun(m, n) ;
    fprintf(wf, "%f\n", s) ;
  }
  fclose(fp) ;
  fclose(wf) ;
  system("pause");
}

