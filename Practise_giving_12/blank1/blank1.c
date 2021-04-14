#include  <stdio.h>
#include  <stdlib.h>
#define    N    6
typedef struct node {
  int  data;
  struct node  *next;
} NODE;
void fun(NODE  *h)
{ NODE  *p, *q;    int  t;
/**********found**********/
p = h->next ;
  while (p) {
/**********found**********/
	  q = p->next ;
     while (q) {
/**********found**********/
        if (p->data > q->data)
        {  t = p->data;  p->data = q->data;  q->data = t;  }
        q = q->next;
    }
    p = p->next;
	/*填空1:本题考查了指针变量p赋初值，使p指向链表的头结点的下一个结点，因此本空应该填写h一>next。
填空2:本空考查了q的作用，q代表p的下一个数，因此次空应该填写p->next。
填空3:if消断句是比较链表中相邻两个数的大小，如果p->data>q->data就交换这两个数的值，因而此空填写>。*/
  }
}
NODE *creatlist(int  a[])
{  NODE  *h,*p,*q;        int  i;
  h = (NODE *)malloc(sizeof(NODE));
  h->next = NULL;
  for(i=0; i<N; i++)
  {  q=(NODE *)malloc(sizeof(NODE));
     q->data=a[i];
     q->next = NULL;
     if (h->next == NULL)  h->next = p = q;
     else    {  p->next = q;  p = q;   }
  }
   return  h;
}
void outlist(NODE  *h)
{ NODE  *p;
  p = h->next;
  if (p==NULL)  printf("The list is NULL!\n");
  else
  {  printf("\nHead  ");
     do
     {  printf("->%d", p->data); p=p->next;  }
     while(p!=NULL);
     printf("->End\n");
  }
}
void main()
{  NODE  *head;
   int  a[N]= {0, 10, 4, 2, 8, 6 };
   head=creatlist(a);
   printf("\nThe original list:\n");
   outlist(head);
   fun(head);
   printf("\nThe list after sorting :\n");
   outlist(head);
   system("pause");
}

