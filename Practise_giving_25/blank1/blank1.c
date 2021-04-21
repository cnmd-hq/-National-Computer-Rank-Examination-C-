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
  /*填空1:题目中要求从形参filename所指的文件中读入学生的数据，以此可以看出本空应该填写"rb"。
填空2:此处的f语句是比较学号的大小，如果学号大就和学号小的换位，以此本空填写>。
填空3:题目要求所有的学生数据均以二进制方式输出到文件中，因此本空填写fwrite。*/
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

