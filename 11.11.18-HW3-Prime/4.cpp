/*
Напишите программу, находящую сумму простых элементов массива.
*/

#include <iostream>
using namespace std;
bool prt(int x)
{
 int k = 0;
 if (x == 1)
 {
  return (0==1);
 }	
 else
 {
  for (int i = 2; i <= (x / 2); i++)
  {
   if ((x % i) == 0)
   {
    return (0 == 1);
    break;
    k++;
   };
  };
  if (k == 0)
  {
   return (1 == 1);
  };
 };
}
int main()
{
 int n, p = 0;
 cin >> n;
 int *zr = new int[n];
 for (int i = 0; i < n; i++)
 {
  cin >> *(zr + i);
  if (prost(*(zr + i)) == prt(3))
  {
   p += *(zr + i);
  };
 };
 cout << '\n';
 cout << p;
}
