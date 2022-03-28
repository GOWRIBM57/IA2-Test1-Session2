#include <stdio.h>

typedef struct _triangle
{
  float base, altitude, area;
} Triangle;
int input_n()
{
  int n;
  printf("How many triangles will you enter:\n");
  scanf("%d", &n);
  return n;
}
Triangle input_triangle()
{
  Triangle a;
  printf("Enter the base, altitude of a triangle:\n");
  scanf("%f%f", &a.base, &a.altitude);
  return a;
}
void input_n_triangles(int n, Triangle t[n])
{
  for (int i = 0; i < n; i++)
  {
    t[i] = input_triangle();
  }
}
void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->altitude;
}
void find_areas(int n, Triangle t[n])
{
  for (int i = 0; i < n; i++)
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small = t[0];

  for (int i = 0; i < n; i++)
  {
    if (small.area > t[i].area)
    {
      small= t[i];
    }
  }
  return small;
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("Among the triangles ");
  for (int i = 0; i < n - 1; i++)
  {
    printf("(%.0f, %.0f) and", t[i].base, t[i].altitude);
  }
  printf("(%.0f, %.0f) the triangle with base = %.0f and altitude = %.0f having area = %.0f is the smallest one.\n", t[n-1].base, t[n-1].altitude, smallest.base, smallest.altitude, smallest.area);
}
int main()
{
  int count = input_n();
  Triangle tris[count];
  input_n_triangles(count, tris);
  find_areas(count, tris);
  Triangle small = find_smallest_triangle(count, tris);
  output(count, tris, small);
  return 0;
}

