#include <stdio.h>
#include <string.h>
#define   N    80
void fun (char  *w,int  m)
{
	int i,j;
	char t;
	for(i=1;i<=m;i++)
	{
		t=w[0];
		for(j=1;w[j]!='\0';j++)
			w[j-1]=w[j];
		w[j-1]=t;
		/*本题应采用"循环左移"的算法，多层循环用于控制移动的字符的个数，即需进行多少次循环,
		内嵌循环的作用是将从第2个字符以后的每个字符依次前移一个位置，最后将第1个字符放到最后一个字符中。*/
	}
  
}
void main()
{
  FILE *wf;
  char  a[N]= "ABCDEFGHIJK",b[N]= "ABCDEFGHIJK";
  int  m;
  printf("The origina string :\n");
  puts(a);
  printf("\n\nEnter  m: ");
  scanf("%d",&m);
  fun(a,m);
  printf("\nThe string after moving :\n");
  puts(a);
  printf("\n\n");
/******************************/
  wf=fopen("out.dat","w");
  fun(b,3);
  fprintf(wf,"%s",b);
  fclose(wf);
/*****************************/
  system("pause");
}
