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
   /*���1:�����������������������pa��ָ����ָ��pb, pb��ָ����ָ��pc��
   ���2:����������е����ݣ���ʾΪp->data��
���3:ָ����ƣ�ָ����һ����㣬��p=p->next��*/
}
void main()
{  Q  a, b, c;
   a.data='E';  b.data='F';  c.data='G';  c.next=NULL;
   fun( &a, &b, &c );
   system("pause");
}

