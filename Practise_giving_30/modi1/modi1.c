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
		/*(1) b回存放二级数组a每一行中第1个元素值，表示为a][0]。
(2）每行元素的第1个值要和这一行中的每个元素进行比较，条件j<N可使at][j取到最后元素，而条件j<N-1使a回]i最终取得倒数第2个元素。
(3）因为是找最小值，所以当b大于其后的数值时说明它不是最小，要把比较中较大的值赋给它。*/
    }
}
void main()
{   int  a[N][N]={{1,4,3,2},{8,6,5,7},{11,10,12,9},{13,16,14,15}},b[N];    int  i;
    fun(a,b);
    for (i=0; i<N; i++)  printf("%d,", b[i]);
    printf("\n");
	system("pause");
}

