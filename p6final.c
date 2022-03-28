#include<stdio.h>
#include<string.h>
void input(char *a)
{
  printf("Enter the word that is to be reversed:");
  scanf("%s",a);
}
char str_rev(char *a,char *rev)
{
  int i;
  int l=0;
  for(i=0;i<1/2;i++)
    {
      rev[i]=a[i];
      a[i]=a[l-1-i];
      a[1-l-i]=rev[i];
    }
}
void output(char *a,char *rev)
{
  printf("The reverse of string %s is %s",a,rev);
}
int main()
{
  char a[10],rev[10];
  input(a);
  str_rev(a,rev);
  output(a,rev);
  return 0;
}
