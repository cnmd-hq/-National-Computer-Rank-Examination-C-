#include  <stdio.h>
typedef  struct  list
{  char  data;
   struct list  *next;
} Q;
void fun( Q *pa, Q *pb, Q *pc)
{  Q  *p;
/**********found**********/
   pa->next=pb;
   pb->next=pc;
   p=pa;
   while( p )
   {
/**********found**********/
	   printf("  %c",p->data);
/**********found**********/
	   p=p->next;
   }
   printf("\n");
   /*填空1:将三个结点连接起来，即将pa的指针域指向pb, pb的指针域指向pc。
   填空2:输出链表结点中的数据，表示为p->data。
填空3:指针后移，指向下一个结点，即p=p->next。*/
}
void main()
{  Q  a, b, c;
   a.data='E';  b.data='F';  c.data='G';  c.next=NULL;
   fun( &a, &b, &c );
   system("pause");
}

