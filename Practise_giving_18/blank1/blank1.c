#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
int fun(char  *s)
{ char  *lp,*rp;
/**********found**********/
  lp= s ;
  rp=s+strlen(s)-1;
  while((toupper(*lp)==toupper(*rp)) && (lp<rp) ) {
/**********found**********/
     lp++; rp-- ; }
/**********found**********/
  if(lp<rp) return 0 ;
  else   return 1;
  /*���1:���ݺ�����fun�У��Ա���lp��rp��ʹ�ÿ�֪��lpӦָ���β�s����ʼ��ַ��rpָ��s�Ľ�β��ַ������Ӧ��s��
���2:rp��ָ���ַ�����βָ�룬��ÿ��һ��ѭ��rp��ǰ�ƶ�һ��λ�ã�����Ӧ��:--��
���3:��lp��rp���ʱ����ʾ�ַ����ǻ��Ĳ�����1������ͷ���0������Ӧ��return 0��*/
}
void main()
{ char  s[81];
  printf("Enter a string:  ");  scanf("%s",s);
  if(fun(s)) printf("\n\"%s\" is a Palindrome.\n\n",s);
  else printf("\n\"%s\" isn't a Palindrome.\n\n",s);
  system("pause");
}

