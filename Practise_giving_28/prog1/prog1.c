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
	/*Ҫ��s��ָ���ַ�������a��ָ���ַ����У�����Ҫ����ʹ��ϵͳ�ṩ���ַ����������������ʹ��ѭ����䣬
	����ȡ��a��ָ�ַ����е�Ԫ�أ��������s��ָ���ַ����У����Ϊs��ָ���ַ�����ӽ�����ʶ"O'��*/
}

void main()
{  char  s1[N],  *s2="abcdefghijk";
   fun( s1,s2);
   printf("%s\n", s1);
   printf("%s\n", s2);
   NONO();
}

void NONO()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
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

