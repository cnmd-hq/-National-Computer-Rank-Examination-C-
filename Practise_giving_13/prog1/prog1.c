#include <stdio.h>
#include <string.h>

void fun(char  *s, char  t[])
{
	int i,j=0;
	for(i=0;i<strlen(s);i++)
		if(!((i%2)==0&&(s[i]%2)))
			t[j++]=s[i];
	/*本题是从一个字符串按要求生成另一个新的字符串。我们使用for循环语句来解决这个问题。
	在赋值新的字符串之前，先对数组元素的下标和ASCII码的值进行判断，将满足要求的元素赋给新的字符串。*/
	t[j]=0;
}

void main()
{
  char   s[100], t[100];void NONO ();
  printf("\nPlease enter string S:"); scanf("%s", s);
  fun(s, t);
  printf("\nThe result is: %s\n", t);
  NONO();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  char s[100], t[100] ;
  FILE *rf, *wf ;
  int i ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%s", s) ;
    fun(s, t) ;
    fprintf(wf, "%s\n", t) ;
  }
  fclose(rf) ;
  fclose(wf) ;
  system("pause");
}

