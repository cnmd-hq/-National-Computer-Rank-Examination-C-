#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int fun(int *s,int t,int *k)
{
	int i;
	*k=0;
	for(i=0;i<t;i++)
		if(s[*k]<s[i])
			*k=i;
	return s[*k];
	/*������ֱ��ʹ��ָ�����k��ʹ��ʱҪע���k����ָ�����㡣����һ��ʼ��kָ�������еĵ�һ��Ԫ�أ���**=0��*/
  
}
void main()
{
  FILE *wf;
  int a[10]={ 876,675,896,101,301,401,980,431,451,777},k;
  system("CLS");
  fun(a, 10, &k);
  printf("%d, %d\n ", k, a[k]);
/******************************/
  wf=fopen("out.dat","w");
  fprintf (wf,"%d, %d", k, a[k]);
  fclose(wf);
/*****************************/
  system("pause");
}
