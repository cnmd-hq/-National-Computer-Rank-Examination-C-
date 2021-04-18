#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
int fun(float x[], int n)
/************found************/
   {int j, c=0; float xa=0.0;
   for (j=0; j<n; j++)
     xa += x[j]/n;
   printf("ave =%f\n",xa);
   for (j=0; j<n; j++)
/************found************/
     if (x[j] >= xa)
       c++;
   return c;
   /*1)本题着重考查考生对C语言基本语法以及比较运算符的掌握情况。
   (2)本题中的第一个错误:在C语言中，应成对出现，所以程序中的语句"int j,c=O:float xa=0.0;"
   应改为"{int j,c=Ofloat xa=0.0;"或相同作用的语句;
本题中的第二个错误:在c语言中，判断大于或等于的运算符应为>=，所以程序中的语句"xi=>xa)"应改为"f(xi>=xa)"或相同作用的语句。*/
}
void main ()
{float x[100] = {193.199, 195.673, 195.757, 196.051, 196.092, 196.596, 196.579, 196.763};
 system("cls");   
 printf("%d\n", fun (x, 8));
 system("pause");
}
