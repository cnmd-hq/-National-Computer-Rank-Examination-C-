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
		/*����Ӧ����"ѭ������"���㷨�����ѭ�����ڿ����ƶ����ַ��ĸ�����������ж��ٴ�ѭ��,
		��Ƕѭ���������ǽ��ӵ�2���ַ��Ժ��ÿ���ַ�����ǰ��һ��λ�ã���󽫵�1���ַ��ŵ����һ���ַ��С�*/
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
