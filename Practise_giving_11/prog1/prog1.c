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
		if(str[i]==str[j-1-i]);
		else
		{
			k=0;
			break;
		}
		return k;
		/*判断回文就是将第一个字符与最后一个字符比较，第二个字符与倒数第二个字符进行比较，
		依此类推，直到中间的字符，如果比较的结果都相同，那么这个字符串就是回文，否则不是。
		程序中循环语句用来遍历字符串，条件语句用来判断当前字符与对应位置的字符是否相同。*/
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
