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
	/*Ҫͳ���ַ����������ַ��ĸ���������Ӧ�������n������ʼ��Ϊ0��Ȼ������ַ�����
	����ж��ַ��Ƿ�Ϊ�����ַ����ж�����Ϊ��Ԫ�ص�ASCII�����ַ�0��9��ASCII��֮�䣬
	���ж�������������ʹn��ֵ��1�����򣬼����ж���һ���ַ���ֱ���ַ���������*/
}

void main()
{  char *s="2def35adh25  3kjsdf 7/kj8655x";
   printf("%s\n",s);
   printf("%d\n",fun(s));
   NONO();
}

void NONO()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
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

