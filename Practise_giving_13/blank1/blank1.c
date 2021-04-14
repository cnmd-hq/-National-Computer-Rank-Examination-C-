#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
#include  <ctype.h>
char *fun(char  *s)
{ int  i, j, k, n;    char  *p, *t;
  n=strlen(s)+1;
  t=(char*)malloc(n*sizeof(char));
  p=(char*)malloc(n*sizeof(char));
  j=0; k=0;
  for(i=0; i<n; i++)
  {  if(isdigit(s[i])) {
/**********found**********/
       p[j]=s[i]; j++;}
     else
     {  t[k]=s[i]; k++; }
   }
/**********found**********/
   for(i=0; i<k; i++) p[j+i]= t[i];
   p[j+k]=0;
/**********found**********/
   return p;
   /*填空1:函数中申请了两个内存空间，其中p存放数字字符串，t存放非数字字符串，根据条件可知，p依次存放数字字符串，其位置由j来控制，所以应填j。
   填空2:利用for循环再把t中的内容依次追加到p中，其中t的长度为k，所以应填ko
填空3:处理之后的字符串存放到p中，最后返回p的首地址即可，所以应填p。*/
}
void main()
{ char  s[80];
  printf("Please input: ");  scanf("%s",s);
  printf("\nThe result is: %s\n",fun(s));
  system("pause");
}

