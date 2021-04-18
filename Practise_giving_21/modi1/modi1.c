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
  /*(1)C语言中，x能被y整除的表示方法是x%y==0，而不是题目中所表示的x%y=0。所以，if(k%13=0)||(k%17=O))修改后的结果应该是答案所示信息。
  (2)程序中缺少程序完整所需的"}"，此类信息在做题时一定要注意，可以在做题前先运行一下程序，这样明显的错误一般都会有错误信息显示出来。
  比如丢失""的错误信息
是"Compound statement missing }in function fun"。*/
}
void main()
{system("CLS");
  printf("%d\n ",fun(500));
  system("pause");
}
