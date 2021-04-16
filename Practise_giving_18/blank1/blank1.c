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
  /*填空1:根据函数体fun中，对变量lp和rp的使用可知，lp应指向形参s的起始地址，rp指向s的结尾地址，所以应填s。
填空2:rp是指向字符串的尾指针，当每做一次循环rp向前移动一个位置，所以应填:--。
填空3:当lp和rp相等时，表示字符串是回文并返回1，否则就返回0，所以应填return 0。*/
}
void main()
{ char  s[81];
  printf("Enter a string:  ");  scanf("%s",s);
  if(fun(s)) printf("\n\"%s\" is a Palindrome.\n\n",s);
  else printf("\n\"%s\" isn't a Palindrome.\n\n",s);
  system("pause");
}

