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
  /*������ĿҪ�󣬿�����ѭ������ۼ�n��ѧ�����ܷ֣����ƽ���ɼ���������ѭ����������ѡ�������к���Ĳ�����
  ��С��ƽ��ֵ���򽫸�ֵ�����aver�洢��Ԫ�С�t=s[k]��ѭ�����Ӵ���*aver= &aveΪ�﷨ָ��Ĵ���*/
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
