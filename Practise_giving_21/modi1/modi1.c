#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int fun(int k)
{ int m=0,mc=0, j;
  while((k>=2)&&(mc<10))
     {
/*************found**************/
      if((k%13==0)||(k%17==0))
        { m=m+k;mc++;}
      k--;
/*************found**************/
    
  }
  return m;
  /*(1)C�����У�x�ܱ�y�����ı�ʾ������x%y==0����������Ŀ������ʾ��x%y=0�����ԣ�if(k%13=0)||(k%17=O))�޸ĺ�Ľ��Ӧ���Ǵ���ʾ��Ϣ��
  (2)������ȱ�ٳ������������"}"��������Ϣ������ʱһ��Ҫע�⣬����������ǰ������һ�³����������ԵĴ���һ�㶼���д�����Ϣ��ʾ������
  ���綪ʧ""�Ĵ�����Ϣ
��"Compound statement missing }in function fun"��*/
}
void main()
{system("CLS");
  printf("%d\n ",fun(500));
  system("pause");
}
