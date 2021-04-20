#include  <stdio.h>
void NONO();
int fun(char  *s)
{
	int n=0;
	char *p;
	for(p=s;*p!='\0';p++)
		if((*p>='0')&&(*p<='9'))
			n++;
	return n;
	/*要统计字符串中数字字符的个数，首先应定义变量n，并初始化为0，然后遍历字符串，
	逐个判断字符是否为数字字符，判断条件为该元素的ASCII码在字符0和9的ASCII码之间，
	若判断条件成立，则使n的值加1，否则，继续判断下一个字符，直到字符串结束。*/
}

void main()
{  char *s="2def35adh25  3kjsdf 7/kj8655x";
   printf("%s\n",s);
   printf("%d\n",fun(s));
   NONO();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i;
  char s[256];

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fgets(s, 255, fp);
    fprintf(wf, "%d\n", fun(s));
  }
  fclose(fp) ;
  fclose(wf) ;
}

