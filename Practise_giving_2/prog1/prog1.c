#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define N 10
typedef struct ss
{ char num[10]; 
  int s;
} STU;
void fun(STU a[], STU *s)
{
  int i;
  *s=a[0];
  for(i=0;i<N;i++)
	  if(s->s>a[i].s)
		  *s=a[i];
  /*�ҳ��ṹ������Ԫ���е���Сֵ������Ϊ��1��ֵ��С����*s=a[0];�������ѭ���Ĺ����з��ֱȵ�1��ֵ��С�ģ��ͽ�ָ��sָ���Ԫ�أ�ֱ���ҵ���СԪ��*/
}
void main()
{ 
  FILE *wf;
  STU a[N]={{ "A01",81},{ "A02",89},{ "A03",66},{ "A04",87},{ "A05",77},
  { "A06",90},{ "A07",79},{ "A08",61},{ "A09",80},{ "A10",71}},m;
  int i;
  system("CLS");
  printf("*****The original data*****\n");
  for(i=0;i<N;i++) 
    printf("No=%s Mark=%d\n", a[i].num,a[i].s);
  fun(a,&m);
  printf("*****THE RESULT*****\n");
  printf("The lowest :%s, %d\n",m.num,m.s);
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%s, %d",m.num,m.s);
  fclose(wf);
  system("pause");
/*****************************/
}
