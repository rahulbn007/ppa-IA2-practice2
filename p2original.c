#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the side:\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  int x=0;
  if(a!=b && b!=c && c!=a)
     x=1;
  return x;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene>0)
  {
    printf("the triangle of sides %d %d %d is scalene\n",a,b,c);
  }
  else
   printf("it is not scalene\n");
}
int main()
{
  int e,f,g,h;
  e=input_side();
  f=input_side();
  g=input_side();
  h=check_scalene(e,f,g);
  output(e,f,g,h);
  return 0;
}