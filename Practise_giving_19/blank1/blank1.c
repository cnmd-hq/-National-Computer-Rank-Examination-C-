#include  <stdio.h>
int fun(char  *s)
{ int  n=0, flag=0;
  while(*s!='\0')
  { if(*s!=' ' && flag==0) {
/**********found**********/
     n++ ;  flag=1;}
/**********found**********/
    if (*s==' ')  flag=0;
/**********found**********/
    s++ ;
	/*���1:���ʸ����ñ���n��ͳ�ƣ���ǰ��ĸ���ǿո���flag״̬��־Ϊ0ʱ�������жϳ���һ���µĵ��ʣ�
	�򵥴����ͼ�1����״̬��־flag��Ϊ1������Ӧ��n++��
	���2:��ǰ�ַ��ǿո�ʱ��flag״̬��־��0������Ӧ��0��
���3:�ж���һ���ַ�֮��Ҫ�����ж��ַ�������һ��λ�ã�����Ӧ��s++��*/
  }
  return  n;
}
void main()
{ char  str[81];    int  n;
  printf("\nEnter a line text:\n");  gets(str);
  n=fun(str);
  printf("\nThere are %d words in this text.\n\n",n);
  system("pause");
}

