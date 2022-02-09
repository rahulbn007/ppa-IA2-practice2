#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int c=0,i;
  for(i=1;i<=n;i++)
    {
      if(n % i == 0)
        c++;
    }
  return c;
}
void output(int n,int composite)
{
  if(composite>2)
   printf("%d is a composite number.",n);
  else
    printf("it is not a composite number.");
}
int main()
{
  int a,b;
  a=input_number();
  b=is_composite(a);
  output(a,b);
  return 0;
}