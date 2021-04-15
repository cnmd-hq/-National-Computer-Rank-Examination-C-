#include <stdio.h>
void fun(int  a, int  b, long  *c)
{
	*c=(a%10)*1000+(b%10)*100+(a/10)*10+(b/10);
	/*本题是给出两个两位数的正整数分别取出各位上的数字，再按条件组成一个新数。
	取a十位数字的方法a/10，取a个位数字的方法a%10。同理可取出整数b的个位数和十位数。*/
}
void main()
{  int  a,b; long  c;void NONO ();
   printf("Input a, b:");
   scanf("%d%d", &a, &b);
   fun(a, b, &c);
   printf("The result is: %ld\n", c);
   NONO();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  int i, a,b ; long c ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d,%d", &a, &b) ;
    fun(a, b, &c) ;
    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
  }
  fclose(rf) ;
  fclose(wf) ;
  system("pause");
}

