#include <conio.h>
#include <stdio.h>
/*************found**************/
char *fun(char *s,char *t)
{
  int s1=0,t1=0;
  char *ss,*tt;
  ss=s;
  tt=t;
  while(*ss)
  {
	s1++;
  /*************found**************/
	ss++;
  }
    while(*tt)
  {
	t1++;
/*************found**************/
	tt++;
  }
  if(t1>s1)
	return t;
  else
	return s;
}
void main()
{
  char a[80],b[80];
  printf("\nEnter a string : ");
  gets(a);
  printf("\nEnter a string again: ");
  gets(b); 
  printf("\nThe longer is :\n\n%s\n", fun(a,b));
  system("pause");
}
