#include  <stdio.h>
#define    N    5
typedef struct student {
  long  sno;
  char  name[10];
  float  score[3];
} STU;
void fun(char  *filename)
{ FILE  *fp;      int  i, j;
  STU  s[N], t;
/**********found**********/
  fp = fopen(filename, "rb");
  fread(s, sizeof(STU), N, fp);
  fclose(fp);
  for (i=0; i<N-1; i++)
    for (j=i+1; j<N; j++)
/**********found**********/
      if (s[i].sno > s[j].sno)
      {  t = s[i];  s[i] = s[j];  s[j] = t;  }
  fp = fopen(filename, "wb");
/**********found**********/
  fwrite(s, sizeof(STU), N, fp); 
  fclose(fp);
  /*���1:��Ŀ��Ҫ����β�filename��ָ���ļ��ж���ѧ�������ݣ��Դ˿��Կ�������Ӧ����д"rb"��
���2:�˴���f����ǱȽ�ѧ�ŵĴ�С�����ѧ�Ŵ�ͺ�ѧ��С�Ļ�λ���Դ˱�����д>��
���3:��ĿҪ�����е�ѧ�����ݾ��Զ����Ʒ�ʽ������ļ��У���˱�����дfwrite��*/
}
void main()
{ STU  t[N]={ {10005,"ZhangSan", 95, 80, 88}, {10003,"LiSi", 85, 70, 78},
             {10002,"CaoKai", 75, 60, 88}, {10004,"FangFang", 90, 82, 87},
             {10001,"MaChao", 91, 92, 77}}, ss[N];
  int  i,j;      FILE  *fp;
  fp = fopen("student.dat", "wb");
  fwrite(t, sizeof(STU), 5, fp);
  fclose(fp);
  printf("\n\nThe original data :\n\n");
  for (j=0; j<N; j++)
  {  printf("\nNo: %ld  Name: %-8s      Scores:  ",t[j].sno, t[j].name);
     for (i=0; i<3; i++)  printf("%6.2f ", t[j].score[i]);
     printf("\n");
  }
  fun("student.dat");
  printf("\n\nThe data after sorting :\n\n");
  fp = fopen("student.dat", "rb");
  fread(ss, sizeof(STU), 5, fp);
  fclose(fp);
  for (j=0; j<N; j++)
  {  printf("\nNo: %ld  Name: %-8s      Scores:  ",ss[j].sno, ss[j].name);
    for (i=0; i<3; i++)  printf("%6.2f ", ss[j].score[i]);
    printf("\n");
	system("pause");
  }
}

