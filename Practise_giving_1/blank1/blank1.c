#include  <stdio.h>
#define    N    5
typedef struct  student {
  long  sno;
  char  name[10];
  float  score[3];
} STU;
void fun(char  *filename, STU  n)
{ FILE  *fp;
/**********found**********/
  fp = fopen(filename, "rb+");
/**********found**********/
  fseek(fp, -(long)sizeof(STU), SEEK_END);
/**********found**********/
  fwrite(&n, sizeof(STU), 1,fp);
  fclose(fp);
}
//填空1:本空是对文本文件的打开，filename所指的文件中的最后数据要进行重写，因此首先是要打开，因而本空填写filename。
//填空2:fseek功能是重定位流上的文件指针。用法:int fseek(FILE*stream, long offset, int fromwhere);本空应该填写和。
//填空3:因为题目中要对所有学生数据均以二进制方式输出到文件中，因此本空填写和。
//知识点讲解:函数名:fseek
//功能:重定位流上的文件指针。
//用法: int fseek(FILE*stream, long offset, int fromwhere)。
//描述:函数设置文件指针stream的位置。如果执行成功，stream将指向以
//fromwhere为基准，偏移offset个字节的位置。如果执行失败(比如offset超过文件自身大小)，则不改变stream指向的位置。
//返回值:成功，返回0;否则返回非0值。
void main()
{ STU  t[N]={ {10001,"MaChao", 91, 92, 77}, {10002,"CaoKai", 75, 60, 88},
             {10003,"LiSi", 85, 70, 78},    {10004,"FangFang", 90, 82, 87},
             {10005,"ZhangSan", 95, 80, 88}};
  STU  n={10006,"ZhaoSi", 55, 70, 68}, ss[N];
  int  i,j;      FILE  *fp;
  fp = fopen("student.dat", "wb");
  fwrite(t, sizeof(STU), N, fp);
  fclose(fp);
  fp = fopen("student.dat", "rb");
  fread(ss, sizeof(STU), N, fp);
  fclose(fp);
  printf("\nThe original data :\n\n");
  for (j=0; j<N; j++)
  {  printf("\nNo: %ld  Name: %-8s      Scores:  ",ss[j].sno, ss[j].name);
     for (i=0; i<3; i++)  printf("%6.2f ", ss[j].score[i]);
     printf("\n");
  }
  fun("student.dat", n);
  printf("\nThe data after modifing :\n\n");
  fp = fopen("student.dat", "rb");
  fread(ss, sizeof(STU), N, fp);
  fclose(fp);
  for (j=0; j<N; j++)
  {  printf("\nNo: %ld  Name: %-8s      Scores:  ",ss[j].sno, ss[j].name);
     for (i=0; i<3; i++)  printf("%6.2f ", ss[j].score[i]);
     printf("\n");
  }
}

