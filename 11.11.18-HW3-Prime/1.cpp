/*
Напишите программу, вычисляющую сумму нечетных цифр целого числа.
*/

#include <iostream>
using namespace std;
int main()
{
   int n, m, t = 0;
   cin >> n;
   m = (n % 10);
   while (n >= 1)
    {
       if ((m% 2) == 1)
        {
           t += m;
        };
       n /= 10;
       m= (n % 10);
    };
   cout << t;
}
