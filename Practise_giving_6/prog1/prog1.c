#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float fun (float h )
{
    int tmp=0;
	tmp=(int)h*1000+5;
	return (float)tmp/1000;
	/*注意:本题要求h的值真正进行四舍五入运算，而不是为了输出，即不能用printf("%7.2f"，h)来直接得到结果。
四舍五入算法:如果要求精确到小数点后面的第n位，则需要对第n+1位进行运算。方法是将该小数乘以10的n+ 1次方后加5，
然后除以10并强制转换变量类型为长整型，再将该数除以10的n次方，同时强制转换类型为浮点型。*/

}
void main()
{
  FILE *wf;
  float a=0.0;
  system("CLS");
  printf("Enter a: ");
  scanf ("%f",&a);
  printf("The  result : %f\n", fun(a));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(8.32533));
  fclose(wf);
  system("pause");
/*****************************/
}
