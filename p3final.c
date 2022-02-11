#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number:");
  scanf("%d",&a);
  return a;
}
int iscomposite(int n,int composite)
{
  composite=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0) 
    {
      composite =+1;
    }
  }
  return composite;
}
void output(int n,int a)
{
  if(a>2)
  {
    printf("The given number %d is composite",n);
  }
  else{
    printf("The given number %d  is not composite",n);
  }
}
int main()
{
  int n,a,i,composite;
  a=input();
  n=iscomposite(n,composite);
  output(n,a);
  return 0;
}