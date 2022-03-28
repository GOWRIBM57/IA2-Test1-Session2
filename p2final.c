#include<stdio.h>
int input()
{
  int n;
  printf("Enter the sides of a triangle:");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  int result;
  if(a!=b && b!=c && c!=a)
  {
    result=1;
  }
  else
  return result;
}
void output(int a,int b,int c,int scalene)
{
  int result;
  if(result==1)
  {
    printf("The given triangle is scalene");
  }
  else
  {
    printf("The given triangle is not scalene"); 
  }
}
int main()
{
  int a,b,c,result,scalene;
  a=input();
  b=input();
  c=input();
  result=check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}












