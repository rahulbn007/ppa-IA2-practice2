#include <stdio.h>
typedef struct _triangle
{
  float base,altitude,area;
}Triangle;
int input_n()
{
  int n;
  printf("enter the number of triangles\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle triangle1; 
  printf("enter the value of base and altitude\n");
  scanf("%f%f",&triangle1.base,&triangle1.altitude);
  return triangle1;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=(t->base*t->altitude)/2.0;
}
void find_areas_n(int n, Triangle t[n])
{
   for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small = t[0];
  for(int i=1;i<n;i++)
    {
      if(small.area>t[i].area)
      {
        small=t[i];
      }
    }
  return small;
}
void output(int n,Triangle t[n],Triangle smallest)
{
  printf("The smallest of all triangles\n");
  for(int i=0;i<n;i++)
  {
     printf("%d with base: %f and hieght: %f\n",i+1,t[i].base,t[i].altitude);
  }
  printf("is the triangle with base %f, %f is%f.\nThe area of triangle with base = %f and altitude = %f is %f",smallest.base,smallest.altitude,smallest.area,smallest.base,smallest.altitude,smallest.area);
}
int main()
{
  int x;
  x=input_n();
  Triangle t[x],smallest;
  input_n_triangles(x,t);
  find_areas_n(x,t);
  smallest=find_smallest_triangle(x,t);
  output(x,t,smallest);
  return 0;
}