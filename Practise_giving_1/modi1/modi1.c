#include <stdio.h>
#include <stdlib.h>
typedef  struct  aa
{  int  data;
   struct  aa  *next;
} NODE;
NODE *Creatlink(int  n, int  m)
{  NODE  *h=NULL, *p, *s;
   int  i;
/**********found***********/
   p=(NODE * )malloc(sizeof(NODE));
   h=p;
   p->next=NULL;
   for(i=1; i<=n; i++)
   {  s=(NODE *)malloc(sizeof(NODE));
      s->data=rand()%m;      s->next=p->next;
      p->next=s;             p=p->next;
   }
/**********found***********/
   return  h;
//(1）由变量定义可知p为指向结点的指针。指向刚分配的结构指针，所以应改为p=(NODE *)malloc(sizeof(NODE))。
//(2）在动态分配内存的下一行语句是，使用临时结构指针变量h保存p指针的初始位置，最后返回不能使用p，是因为p的位置已经发生了变化，所以应改为return h。
}
void outlink(NODE  *h)
{  NODE  *p;
   p=h->next;
   printf("\n\nTHE  LIST :\n\n  HEAD ");
   while(p)
   {  printf("->%d ",p->data);
      p=p->next;
   }
   printf("\n");
}
void main()
{  NODE  *head;
   head=Creatlink(8,22);
   outlink(head);
}

