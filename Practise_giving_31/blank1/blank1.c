#include  <stdio.h>
double fun(int  n)
{ int  i, k;    double  s, t;
  s=0;
/**********found**********/
  k=1;
  for(i=1; i<=n; i++) {
/**********found**********/
    t=i*2;
    s=s+k*(2*i-1)*(2*i+1)/(t*t);
/**********found**********/
    k=k*(-1);
	/*填空1:由fun函数整体结构可以看出k的作用是赋值，并累加各项前边的正负号，由于第一项是正的，因此赋给k的值为1。
填空2:此空下一行的表达式k*(2*i-1)*(2*i+1)(t*t)累加的通向，k为正负号，由题目中公式可知t=2*i。
填空3:由于通向前边的正负号每次都要发生变化，因此k=k*(-1)。*/
  }
  return  s;
}
void main()
{ int  n=-1;
  while(n<0)
  { printf("Please input(n>0): ");  scanf("%d",&n);  }
  printf("\nThe result is: %f\n",fun(n));
  system("pause");
}

