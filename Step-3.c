#pragma execution_character_set("utf-8")  
#include <stdio.h>

int var(int a,int b,int c)//计算方差
{
    int p = (a+b+c)/3;
    return ((p-a)*(p-a)+(p-b)*(p-b)+(p-c)*(p-c))/3;
}

int comrescore(int p,int v)
{
    return 3*p-v/3;
}

void sort(int zh1,int zh2,int zh3)
{
     if (zh1 >= zh2 && zh2 >= zh3) {
      printf("小明 > 小强 > 小林");
  } else if (zh1 >= zh3 && zh3 >= zh2) {
      printf("小明 > 小林 > 小强");
  } else if (zh2 >= zh1 && zh1 >= zh3) {
      printf("小强 > 小明 > 小林");
  } else if (zh2 >= zh3 && zh3 >= zh1) {
      printf("小强 > 小林 > 小明");
  } else if (zh3 >= zh1 && zh1 >= zh2) {
      printf("小林 > 小明 > 小强");
  } else { // zh3 >= zh2 && zh2 >= zh1
      printf("小林 > 小强 > 小明");
  }
}


int main(){
  int x1, x2, x3;
  int y1, y2, y3;
  int z1, z2, z3;

  printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &x1, &x2, &x3);
  printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &y1, &y2, &y3);
  printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &z1, &z2, &z3);

  int v1 = var(x1,x2,x3);
  int zh1 = comrescore((x1+x2+x3)/3,v1);
  
  int v2 = var(y1,y2,y3);
  int zh2 = comrescore((y1+y2+y3)/3,v2);
  
  int v3 = var(z1,z2,z3);
  int zh3 = comrescore((z1+z2+z3)/3,v3);
  
  
  sort(zh1,zh2,zh3);

  return 0;
}