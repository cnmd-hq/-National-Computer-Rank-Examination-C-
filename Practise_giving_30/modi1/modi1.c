#include  <stdio.h>
#define   N   4
void fun(int  a[][N], int  b[])
{   int  i, j;
    for (i=0; i<N; i++)
    {
/**********found**********/
        b[i] = a[i][0];
/**********found**********/
        for (j=1; j<N; j++)
/**********found**********/
           if ( b[i] > a[i][j] )
               b[i] = a[i][j];
		/*(1) b�ش�Ŷ�������aÿһ���е�1��Ԫ��ֵ����ʾΪa][0]��
(2��ÿ��Ԫ�صĵ�1��ֵҪ����һ���е�ÿ��Ԫ�ؽ��бȽϣ�����j<N��ʹat][jȡ�����Ԫ�أ�������j<N-1ʹa��]i����ȡ�õ�����2��Ԫ�ء�
(3����Ϊ������Сֵ�����Ե�b����������ֵʱ˵����������С��Ҫ�ѱȽ��нϴ��ֵ��������*/
    }
}
void main()
{   int  a[N][N]={{1,4,3,2},{8,6,5,7},{11,10,12,9},{13,16,14,15}},b[N];    int  i;
    fun(a,b);
    for (i=0; i<N; i++)  printf("%d,", b[i]);
    printf("\n");
	system("pause");
}
