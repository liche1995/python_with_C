#include <stdio.h>
#include "test_swig.h"

// 列印乘法表
void Table99(int n)
{
 int i,j;
 for(i = 1; i <= n; i++)
 {
  for(j = 1; j <= n; j++)
  {
   printf("%d*%d=%-4d",i,j,i*j);
  }
  printf("\n");
 }
}

// 列印斐波那契數列的前20個
void Fabocci(void)
{
 long int f1,f2;
 f1 = f2 = 1;
 int i;
 for(i = 1; i <= 20; i++)
 {
  printf("%12ld %12ld",f1,f2);
  if(i % 2 == 0)
   printf("\n");
  f1 = f1 + f2;
  f2 = f1 + f2;
 }
}

// 返回兩個數值中的最大那個。
int Max_value(int value1,int value2)
{
 if(value1 > value2)
 {
  return value1;
 }

 return value2;
}
//https://stackoverflow.com/questions/69885600/swig-doesnt-work-on-windows-with-mingw-w64-when-binding-c-and-python-dll-loa
//https://www.796t.com/post/NjFxMg==.html
//https://www.twblogs.net/a/5eec69001f92b2f1a17ccc1c/?lang=zh-cn