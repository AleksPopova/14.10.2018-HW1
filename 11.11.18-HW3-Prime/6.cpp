/*
Напишите программу, выписывающую все элементы последовательности,
имеющие не менее пяти делителей.
*/

#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int *w = new int[a];

	for (int i = 0; i < a; i++)
	{
		cin >> *(w + i);
	};
	cout << '\a';
	for (int i = 0; i < a; i++)
	{
		int k = 0;
		int q = *(w + i);
		for (int j = 1; j <= q; j++)
		{
			if ((q % j) == 0)
			{
				k++;
			};
		};
		if (k >= 5)
		{
			cout << q << " ";
		};
	};
}
