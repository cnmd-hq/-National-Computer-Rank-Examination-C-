#include  <stdio.h>
void NONO();
double fun(double  a[ ] , int  n)
{
	double sum=0,max,min;
	int i;
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
	sum=sum-max-min;
	return(sum/(n-2));
	/*�趨��������sum��ź�ֵ��max������ֵ��min�����Сֵ��max��min����Ϊ�����е�һ��Ԫ�ص�ֵ��
	����ѭ����������Ԫ���ۼӵ�sum�У����ҳ����ֵ����Сֵ,sumֵ��ȥ���ֵ����Сֵ����������sum����Ԫ�ظ���-2��ƽ��ֵ��*/



}

void main()
{  double  b[10],  r;    int  i;
    printf("����10����������b������ :  ");
    for (i=0; i<10; i++)   scanf("%lf",&b[i]);
    printf("�����10�������� :  ");
    for (i=0; i<10; i++)   printf("%4.1lf ",b[i]);    printf("\n");
    r = fun(b, 10);
    printf("ȥ����߷ֺ���ͷֺ��ƽ���� :  %f\n", r );
    NONO();
}

void NONO()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  FILE *fp, *wf ;
  int i, j ;
  double b[10], r ;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    for(j = 0 ; j < 10 ; j++) {
      fscanf(fp, "%lf ", &b[j]) ;
    }
    r = fun(b, 10) ;
    fprintf(wf, "%f\n", r) ;
  }
  fclose(fp) ;
  fclose(wf) ;
  system("pause");
}

