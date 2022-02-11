#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the side of a triangle:");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  int result;
  if( a!=b && b!=c && c!=a)
  {
     
      result=1;
  }
  else
  {
   result=0 ;
  }
  return result;

}
void output(int a,int b, int c, int isscalene)
{ 
int result;
  if(result == 1)
  {
    printf("it is a scalene triangle");

  }
  if(result == 0){
    printf("not a scalene triangle");
  }}
  int main()
  {
    int a,b,c,result;
    a = input_side();
    b = input_side();
    c = input_side();
    result =check_scalene(a,b,c);
    output(a,b,c,result);
    return 0;

  }
