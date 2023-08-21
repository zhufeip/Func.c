#include<stdio.h>
int FuncRand(int range)
//随机数函数，能够调整范围[0,range-1]
{
	int Num;
	srand((unsigned)time(NULL));
	Num=rand() % (range);
	return Num;
}
//运用
int mian()
{
  int randnum=FuncRand(101);//生成一个[0-100]的随机数
  printf("%d",randnum);
  return 0;
}
