#include<stdio.h>
int input()
{
  int a;
  printf("enter the value of numbers to be added\n");
  scanf("%d",&a);
  return a;
}
  int add(int a,int b)
 {
   int 
   sum=a+b;
   return sum;
 } 

 int output(int a ,int b, int c)
 {

   printf(" Sum of a and b is %d+%d=%d",a,b,c);
 }

 int main()
 {
   int a,b,sum;
   a=input();
   b=input();
   sum=add(a,b);
   output(a,b,sum);
   return 0;
 }