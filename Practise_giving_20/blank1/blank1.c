#include  <stdio.h>
int fun(char  *s, char  *t)
{ int  n=0;
  while(*s)
  { if(*s < 97) {
/**********found**********/
     *(t+n)=*s;  n++;  }
/**********found**********/
     s++ ;
  }
  *(t+n)=0;
/**********found**********/
  return  n ;
  /*���1:�ж�s��ָ����ַ����е��ַ���������ʱ������ǰ�ַ���ŵ�tָ����ַ����У�����Ӧ��*s��
���2:�ж���һ���ַ�֮�󣬽��ַ�����ָ���Ƶ���һ��λ�ã�����Ӧ��s������
���3:��ĿҪ����Ҫ���ط����������ַ�����n������Ӧ��no*/
}
void main()
{ char  s[81],t[81];    int  n;
  printf("\nEnter a string:\n");  gets(s);
  n=fun(s,t);
  printf("\nThere are %d letter which ASCII code is less than 97: %s\n",n,t);
  system("pause");
}

