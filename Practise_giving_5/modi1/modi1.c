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
  /*switchi语句说明如下:
(1)switch后的表达式，可以是整型或字符型，也可以是枚举类型。在新的ANSIC标准中允许表达式的类型为任何类型。
2每个case后的常量表达式只能是由常量组成的表达式，当switch后的表达式的值与某一个常量表达式的值一致时，程序就转到此case后的语句开始执行。如果没有一个常量表达式的值与switch后的值一致，就执行default后的语句。
(3)各个case后的常量表达式的值必须互不相同。
(4各个case的次序不影响执行结果，一般情况下，尽量将出现概率大的case放在前面。
(5)在执行完一个case后面的语句后，程序会转到下一个case后的语句开始执行，因而必须使用break语句才能跳出。*/
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
