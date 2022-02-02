#include<stdio.h>
float input()
{
  float f;
  printf("Enter the number:\n");
  scanf("%f",&f);
  return f;
}
float my_sqrt1(float n)
{
  float s=n/2;
  float t=0;
  while (s!=t)
  {
    t=s;
    s=(n/t + t)/2;
  }
  return s;
}
void output(float n, float sqrt_result)
{
  printf("square root of %f if %f\n",n,sqrt_result);
}
int main()
{
  float n=input();
  float r=my_sqrt1(n);
  output(n,r);
  return 0;
}