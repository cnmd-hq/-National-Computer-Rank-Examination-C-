#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
/*************found**************/
 void fun(char *s, int num[5])
{ int k, i=5;
  for(k=0;k<i;k++)
/*************found**************/
      num[k]=0;
  for(;*s;s++)
      { i=-1;
/*************found**************/
        switch(*s)
           { case 'a': case'A':{i=0;break;}
             case 'e': case 'E':{i=1;break;}
             case 'i': case 'I':{i=2;break;}
             case 'o': case 'O':{i=3;break;}
             case 'u': case 'U':{i=4;break;}
           }
       if(i>=0)
       num[i]++;
      }
  /*switchi���˵������:
(1)switch��ı��ʽ�����������ͻ��ַ��ͣ�Ҳ������ö�����͡����µ�ANSIC��׼��������ʽ������Ϊ�κ����͡�
2ÿ��case��ĳ������ʽֻ�����ɳ�����ɵı��ʽ����switch��ı��ʽ��ֵ��ĳһ���������ʽ��ֵһ��ʱ�������ת����case�����俪ʼִ�С����û��һ���������ʽ��ֵ��switch���ֵһ�£���ִ��default�����䡣
(3)����case��ĳ������ʽ��ֵ���뻥����ͬ��
(4����case�Ĵ���Ӱ��ִ�н����һ������£����������ָ��ʴ��case����ǰ�档
(5)��ִ����һ��case��������󣬳����ת����һ��case�����俪ʼִ�У��������ʹ��break������������*/
}
void main()
{ char s1[81]; int num1[5], i;
  system("CLS");
  printf("\nPlease enter a string: ");
gets(s1);
  fun(s1, num1);
  for(i=0;i<5;i++) printf("%d ",num1[i]);
printf("\n");
system("pause");
}
