#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int largest(int a,int b,int c)
{
  int l;
  l=a;
  if(l<b)
  {
    l=b;
  }
  if(l<c)
  {
    l=c;
  }
  return l;
}
void output(int l)
{
  printf("The largest number is %d\n",l);

}
int main()
{
  int x,y,g,z;
  x=input();
  y=input();
  z=input();
  g=largest(x,y,z);
  output (g);
  return 0;
}