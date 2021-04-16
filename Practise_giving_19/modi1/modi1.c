#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define N 20
int fun(float *s, int n,float *aver)
{ float ave ,t=0.0;
  int count=0,k,i;
  for(k=0;k<n;k++)
/*************found**************/
      t+=s[k];
  ave=t/n;
  for(i=0;i<n;i++)
      if(s[i]<ave) count++;
/*************found**************/
  *aver=ave;
  return count;
  /*根据题目要求，可利用循环语句累计n个学生的总分，求得平均成绩后，再利用循环语句和条件选择语句进行后面的操作。
  若小于平均值，则将该值存放于aver存储单元中。t=s[k]是循环叠加错误，*aver= &ave为语法指向的错误。*/
}
void main()
{ float s[30],aver;
  int m,i;
  system("CLS");
  printf("\nPlease enter m: "); 
  scanf("%d",&m);
  printf("\nPlease enter %d mark :\n",m);
  for(i=0;i<m;i++) scanf("%f",s+i);
  printf("\nThe number of students :%d\n",fun(s,m,&aver));
  printf("Ave=%f\n",aver);
  system("pause");
}
