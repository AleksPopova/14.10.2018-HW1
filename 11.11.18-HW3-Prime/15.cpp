/*
Напишите процедуру, заполняющую квадратный двумерный массив по диагоналям.
На побочной диагонали должны стоять наибольшие значения, 
на соседних с ней - на единицу меньшие, и так далее - до угла,
в котором должны стоять единицы.
*/

#include <stdio.h>
using namespace std;

void diag (int** &o, int u)
{
 u--;

 int c = u, d = 0, k = 1;
 while (c >= d)
 {
  int x = d, y = d;

  while (x < c)
  {
   o[y][x] = k;
   k++, x++;
  };

  while (y < c)
  {
   o[y][x] = k;
   k--, y++;
  };

  while (x > d)
  {
   o[y][x] = k;
   k++, x--;
  };

  while (y > d)
  {
   o[y][x] = k;
   k--, y--;
  };

  d++, c--;
  k += 2;
 };

 if ((u % 2) == 0)
 {
  o[(u/2)][(u/2)] = (u+1);
 };
}

int main()
{
 int n;
 scanf("%d", &n);
 int** s = new int* [n];
 for (int a = 0; a < n; a++)
 {
  *(s+a) = new int [n];
 };

 int w = 2;
 if ((n / 10) > 0) {w+=2;};
 diag(s, n);
 for(int i = 0; i < n; i++)
 {
  for(int j = 0; j < n; j++)
  {
      if (j == 0) {printf("%2d", s[i][j]);}
   else {printf("%*d", w, s[i][j]);};
  };
  printf("\n");
 };
}
