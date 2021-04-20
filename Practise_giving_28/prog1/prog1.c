#include  <stdio.h>
#define    N    20
void NONO();
void  fun( char  *a , char  *s)
{
	while(*s!='\0')
	{
		*a=*s;
		a++;
		s++;
	}
	*a='\0';
	/*要将s所指的字符串存入a所指的字符串中，程序要求不能使用系统提供的字符串函数，本题可以使用循环语句，
	依次取出a所指字符串中的元素，将其存入s所指的字符串中，最后为s所指的字符串添加结束标识"O'。*/
}

void main()
{  char  s1[N],  *s2="abcdefghijk";
   fun( s1,s2);
   printf("%s\n", s1);
   printf("%s\n", s2);
   NONO();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i;
  char s1[256], s2[256];

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fgets(s2, 255, fp);
    fun(s1,s2);
    fprintf(wf, "%s", s1);
  }
  fclose(fp) ;
  fclose(wf) ;
  system("pause");
}

