/*
Напишите программу, вычисляющую произведение цифр целого числа, 
чётность которых совпадает с чётностью последней цифры.
*/

#include <iostream>
using namespace std;
bool ch(int a)
 {
  return ((a % 2) == 0);
 };
int main()
 {
  int x, b, c, d = 1;
  cin » x;
  b = (x % 10);
  c = b;
  while (x >= 1)
  {
   if (ch(c) == ch(b))
   {
    d*= c;
   };
   x /= 10;
   c = (x % 10);
  };
  cout « d;
 }
