#include <math.h>
#include <stdio.h>
double  fun( int  n)
{
	double sum=0.0;
	int i;
	for(i=21;i<=n;i++)
		if((i%3==0)&&i%7==0)
			sum+=i;
	return sqrt(sum);
	/*���⿼������������㷨����������һ��forѭ���ж�С��n����ͬʱ��3��7������������
	�������������������ۼӵ�sum��֮�����sqrt��������sum��ƽ����������Ϊ�����ķ���ֵ��*/



}

void main()   /* ������ */
{  void NONO ();
   printf("s =%f\n", fun ( 1000) );
   NONO();
}
void NONO ()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  FILE *fp, *wf ;
  int i, n ;
  double s;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%d", &n) ;
    s = fun(n) ;
    fprintf(wf, "%f\n", s) ;
  }
  fclose(fp) ;
  fclose(wf) ;
  system("pause");
}

