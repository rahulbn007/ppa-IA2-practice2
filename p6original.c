#include<stdio.h>
void input_string(char *a[])
{
  printf("Enter the word\n");
  scanf("%s",&a);
}
char str_reverse(char a)
{
  char b[100];
  int i,j;
  for(j=0;j!='\0';j--)
    {
      for(i=0;i>j;i++)
        b[i]=a[i];
        a[i]=a[i-1];
        a[i-1]=b[i];
    }
  return b;
}
void output(char a,char *reversea)
{
  printf("the reversal of %s is %s",a,reversea);
}
int main()
{
 char reversea,a[100];
  input_string(char a);
  reversea=str_reverse(char a);
  output(a,reversea);
  return 0;
}