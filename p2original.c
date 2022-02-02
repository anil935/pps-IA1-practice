#include<stdio.h>
int input()
{
  int a;
  printf("enter the value\n");
  scanf("%d",&a);
  return a;
}
int compare(int a,int b,int c)
{
  if ((a>b)&&(a>c))
  {
    return a;
  }
  else if(b>c)
  {
    return b;
  }
  else
  {
    return c;
  }

}
void output(int a,int b,int c,int cmp)
{
  printf("the greatest among %d,%d,%d three is %d",a,b,c,cmp);
}
int main()
{
  int x,y,z,cmp;
  x=input();
  y=input();
  z=input();
  cmp=compare(x,y,z);
  output(x,y,z,cmp);
  return 0;
}