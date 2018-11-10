/*
Напишите программу, заменяющую составные числа на их самые большие простые делители.
*/

#include <iostream>
using namespace std;
bool pr(int x)
{
	int k = 0;
	if (x == 1)
	{
		return 0;
	}
	else
	{
		for (int i = 2; i <= (x / 2); i++)
		{
			if ((x % i) == 0)
			{
				return 0;
				break;
				k++;
			};
		};
		if (k == 0)
		{
			return 1;
		};
	};
}
int main()
{
	long long n;
	cin >> n;
  for (int i = n; i >= 2; i--)
    {
       if (((n % i) == 0) && (pr(i) == pr(2)))
        {
           n = i;
           break;
        };
    };
    cout << n;
}
