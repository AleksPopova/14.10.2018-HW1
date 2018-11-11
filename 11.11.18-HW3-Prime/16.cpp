/*
Напишите процедуру, заполняющую квадратный двумерный массив пирамидой.
*/

#include <stdio.h>
using namespace std;
void o(int **&a, int b)
{
 b--;
 int c = b, d = 0, k = 1;
 while (c >= d)
 {
  int x = d, y = d;
  while (x < c)
  {
   a[y][x] = k;
   x++;
  };
  while (y < c)
  {
   a[y][x] = k;
   y++;
  };
  while (x > d)
  {
   a[y][x] = k;
   x--;
  };
  while (y > d)
  {
   a[y][x] = k;
   y--;
  };
  d++, c--, k++;
 };
 if ((b % 2) == 0)
 {
  a[(b / 2)][(b / 2)] = ((b / 2) + 1);
 };
}
int main()
{
 int n;
 scanf("%d", &n);
 int **y = new int *[n];
 for (int q = 0; q< n; q++)
 {
  *(y+ q) = new int[n];
 };
 int w = 2;
 if ((n/2) >= 10) {w++;};
 o(y, n);
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
  {
      if (j == 0) {printf("%d", y[i][j]);}
   else {printf("%*d", w, y[i][j]);};
  };
  printf("\n");
 };
}
