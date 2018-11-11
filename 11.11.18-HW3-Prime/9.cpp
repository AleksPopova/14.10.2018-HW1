
/*
Напишите программу, находящую корень функции f, если известно, что f – монотонна. 
Функцию f считаем не известной (т.е. она просто возвращает значение по аргументу).
Для отладки разумно использовать кубическую функцию.
*/

#include <iostream>
using namespace std;

bool sign(float y)
{
 return (y >= 0);
}

float f(float y)
{
 return (y * y * y - 5 * y + 2);
}

int main()
{
 float t, u = 0, c = 100, l = (u - c), r = (u + c);
 cin >> t;

 while (sign(f(l)) == sign(f(r)))
 {
  l -= c;
  r += c;
 };

 float d = (r - l);

 while ((f(u) != 0) && (sign(f(u - t)) == sign(f(u + t))))
 {
  d /= 2;
  if (sign(f(l)) != sign(f(u)))
  {
   r -= d;
   u -= (d / 2);
  }
  else
  {
   l += d;
   u += (d / 2);
  };
 };

 cout << u;
}
