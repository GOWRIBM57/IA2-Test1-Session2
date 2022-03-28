#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
   printf("enter the values:");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int is_composit(int n)
{
  for (int i=2;i<=n/2;i++)
  {
    if (n%i==0)
    return 1;
  }
  return 0;
}
int sum_composite_number(int n,int a[n])
{
  int sum=0;
  for(int i=0; i<n; i++)
  {
    if(is_composit(a[i]))
    {
      sum+=a[i];
    }
  }
  return sum;
}
void out_put(int sum)
{
  printf(" %d",sum);
}
int main()
{
  int n,q;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  a=sum_composite_number(n,a);
  out_put(q);
  return 0;
}