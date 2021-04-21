#include <stdio.h>
# define N  50
# define M  11
void fun(int *a,  int *b)
{
	int i,j;
	for(j=0;j<M;j++)
		b[j]=0;
	for(i=0;i<N;i++)
		if(a[i]>=100)
			b[10]++;
		else
			b[a[i]/10]++;
	/*本题是一个分段函数的问题，用两个循环来完成。第1个循环的作用是使b中的所有元素值都为0。
	这个循环不能省略，因为若未对b中的元素赋初值，则它们的值是不可预测的。第2个循环的作用是分别统计a中各年龄段的人数。
	当a≥100时，按题意要将其统计到b[10]中。else的作用是如果年龄小于100，则将其分别统计到b[ai]/10]中。
	由运算优先级可知先进行ai/10的运算，所得结果作为b的下标。若a回为0~9时,ai/10的值为0，且0~9岁的人数正好要存入b[0]中。
	若a为10~19时，a间/10的值为1，且10~19岁的人数正好要存入b[1]中，依此类推。*/
  
}
double  rnd()
{
  static int t=29,c=217,m=1024,r=0;
  r=(r*t+c)%m;  
  return((double)r/m);
}
void main()
{ 
  FILE *wf;
  int age[N], i,d[M];
  int b[N]={32,45,15,12,86,49,97,3,44,52,17,95,63};
  for(i=0; i<N; i++)  
     age[i]=(int)(115*rnd());     /*产生一个随机的年龄数组*/
  printf("The original data :\n");
  for(i=0; i<N; i++)  
     printf((i+1)%10==0? "%4d\n":"%4d",age[i]);   /*每行输出10个数*/
  printf("\n\n");
  fun(age,d);
  for(i=0; i<10; i++)  
     printf("%4d---%4d  :%4d\n", i*10, i*10+9,d[i]);
  printf("Over 100  :  %4d\n",d[10]);
/******************************/
  wf=fopen("out.dat","w");
  fun(b,d);
  for(i=0; i<10; i++)  
     fprintf(wf,"%4d---%4d  :%4d\n", i*10, i*10+9,d[i]);
  fprintf(wf,"Over 100  :  %4d",d[10]);
  fclose(wf);
/*****************************/
  system("pause");
}
