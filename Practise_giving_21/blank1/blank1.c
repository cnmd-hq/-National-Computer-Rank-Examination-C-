#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
int fun(char  *s)
{ int  sum=0;
  while(*s) {
/**********found**********/
    if( isdigit(*s) )  sum+= *s- 48 ;
/**********found**********/
    s++;
  }
/**********found**********/
  return  sum ;
  /*���1:0�ַ���Ӧ��ASCII��ֵ��48����������ַ�ת���ɶ�Ӧ��ֵʱֻҪ��ȥ48�����Ǹ������ַ���Ӧ����ֵ������Ӧ��48��
���2:�ж���һ���ַ�֮�󣬽��ַ���ָ���Ƶ���һ��λ�ã�����Ӧ��s������
���3:�����ۼӺ�sum������Ӧ��sum��*/
}
void main()
{ char  s[81];    int  n;
  printf("\nEnter a string:\n\n");  gets(s);
  n=fun(s);
  printf("\nThe result is:  %d\n\n",n);
  system("pause");
}

