#include <stdio.h>
#define N 80
int fun(char *str)
{
	int i,j=0,k=1;
	char *p=str;
	while(*p)
	{
		j++;
		p++;
	}
	for(i=0;i<j/2;i++)
		if(str[i]==str[j-1-i])
		{
			k=0;
			break;
		}
		return k;
		/*�жϻ��ľ��ǽ���һ���ַ������һ���ַ��Ƚϣ��ڶ����ַ��뵹���ڶ����ַ����бȽϣ�
		�������ƣ�ֱ���м���ַ�������ȽϵĽ������ͬ����ô����ַ������ǻ��ģ������ǡ�
		������ѭ��������������ַ�����������������жϵ�ǰ�ַ����Ӧλ�õ��ַ��Ƿ���ͬ��*/
}

void main()
{
	 char s[N];
	 FILE *out;
         char *test[]={"1234321","123421","123321","abcdCBA"};
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun(s))
		printf("YES\n");
	 else
		printf("NO\n"); 
	 /************************************/
	 out=fopen("out.dat","w");
	 for(i=0;i<4;i++)
	 	if(fun(test[i]))
			fprintf(out,"YES\n");
		else
			fprintf(out,"NO\n");
	 fclose(out);
	 /************************************/
}
