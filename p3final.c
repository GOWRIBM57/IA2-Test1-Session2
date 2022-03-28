#include<stdio.h>
int input()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  return n;
}
int iscomposite(int n)
{
  int i;
  int composite=0;
  for(i=2;i<n;i++)
    {
      if(n%i==0)
      {
        composite=1;
      }
    }
  return composite;
}
void output(int n,int composite)
{
  if(composite==1)
  {
    printf("The given number is composite");
  }
    else{
      printf("The given number is not composite");
    }
  }
int main()
{
  int n,composite;
  n=input();
  composite=iscomposite(n);
  output(n,composite);
  return 0;
}