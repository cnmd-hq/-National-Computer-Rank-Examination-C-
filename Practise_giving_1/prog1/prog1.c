#include<string.h>
#include<stdio.h>
#define N 80
int fun(char *s)
{
  int i,j=0;
  for(i=0;s[i]!='\0';i++)
     if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0'))   /*如果一个字母的下一个字符为空格或者结束标记，则表示一个单词结束*/
        j++;
  return j;           /*返回单词个数*/
//要判断单词的个数，首先想到的是程序怎样识别出一个单词，如果一个字母的下一个字符为空格或者结束标记，则表示一个单词结束，
//因此程序使用for循环语句遍历整个字符串，用f条件语句判断当前字符是否表示一个单词的结束，如果当前字符表示一个单词结束，则存放单词个数的变量加1，最后返回单词的个数。
}
void main()
{ 
  FILE *wf;
  char line[N]; 
  int num=0;
  printf("Enter a string:\n "); 
  gets(line);
  num=fun(line);
  printf("The number of word is:%d\n\n ",num);
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%d",fun("a big car"));
  fclose(wf);
/*****************************/
}
