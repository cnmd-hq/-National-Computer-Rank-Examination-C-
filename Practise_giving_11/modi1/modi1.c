#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct aa
{ int data;
  struct aa *next;
} NODE;
int fun (NODE *h)
{ int sum=0;
  NODE *p;
  p=h->next;
/*************found**************/
  while(p!=NULL)
       { if(p->data%2==0)
             sum+=p->data;
/*************found**************/
          p=p->next;
       }
  return sum;
  /*(1)判断当前指针p指向的结点是否存在，若存在则对该结点数据域进行判断操作。
(2)判断结束后指针指向下一个结点。*/
}
NODE *creatlink(int n)
{ 
  NODE *h,*p,*s;
  int i;
  h=p=(NODE*)malloc(sizeof(NODE));
  for(i=1;i<n;i++)
  {
	s=(NODE*)malloc(sizeof(NODE));
	s->data=rand()%16;
	s->next=p->next;
	p->next=s;
	p=p->next;
  }
  p->next=NULL;
  return h;
}
void outlink(NODE *h)
{ NODE  *p;
  p=h->next;
  printf("\n\n The LIST :\n\n HEAD");
  while(p)
    { printf("->%d",p->data); 
      p=p->next;}
  printf("\n");
}
void main()
{ NODE *head; int sum;
  system("CLS");
  head=creatlink(10);
  outlink(head);
  sum=fun(head);
  printf("\nSUM=%d",sum);
  system("pause");
}
