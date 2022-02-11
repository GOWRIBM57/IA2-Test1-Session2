#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  return n;
}
void input_array(int a,int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    scanf("d",&a[i]);
  }
}
int iscomposite(int n)
{
  int i,yes;
  for(i=0;i<=n;i++)
  {
    if(n%i==0)
    {
      yes=+1;
    }
  }
  return yes;
}
int sum_composite(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    if(iscomposite(a[i])>2)
    {
      sum=sum+a[i];
    }
  }
  return sum;
}
void output(int sum)
{
  printf("The sum is %d",sum);
}
int main()
{
  int n,sum;
  printf("Enter the size of numbers:");
  n=input_array_size;
  int a[n];
  printf("Enter the %d numbers",n);
  input_array(n,a);
  sum=sum_composite(n,a);
  output(sum);
  return 0;
}