#include   <stdio.h>
#include   <string.h>
void NONO();
long  fun( char  *s )
{
	int i,sum=0,len;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		sum=sum*10+*s-48;
		s++;
	}
	return sum;
	/*Ҫ��һ�������ַ�תΪ��Ӧ�����֣�ֻҪ������ASCII���ȥ48���ɡ�Ҫ�������ַ���תΪ��Ӧ�����֣�
	��Ҫ����������ȡ���ַ�תΪ��Ӧ���֣���10�ټ�����һλ���֡�*/


}
void main()
{  char  s[10];    long  r;
   printf("������һ�����Ȳ�����9���ַ��������ַ��� :  ");  gets(s);
   r = fun( s );
   printf(" r = %ld\n" , r );
   NONO();
}

void NONO()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  FILE *fp, *wf ;
  int i;  long r;
  char s[10], *p;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fgets(s, 10, fp);
    p = strchr(s, '\n');
    if (p) *p = 0;
    r = fun(s);
    fprintf(wf, "%ld\n", r);
  }
  fclose(fp) ;
  fclose(wf) ;
  system("pause");
}

