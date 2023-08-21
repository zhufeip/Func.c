#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int FuncRand(int range1,int range2)
//随机数函数，能够调整范围[range1,range2]
{
	int Num;
	srand((unsigned)time(NULL));
	Num=rand() % (range2-range1);
	return Num+(range1);
}
//运用
int mian()
{
  int randnum=FuncRand(0,101);//生成一个[0-100]的随机数
  printf("%d",randnum);
  return 0;
}
