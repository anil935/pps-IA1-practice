#include<stdio.h>
void change(int x)
{
  printf("before change=%d\n",x);
  x+100;
  printf("after change=%d\n",x);
}
 int main()
 {
   int num=200;
   printf("before calling=%d\n",num);
   change(num);
   printf("after calling %d\n",num);
   return 0;
 }