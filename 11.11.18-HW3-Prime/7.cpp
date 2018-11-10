/*
Напишите программу, выписывающую все элементы последовательности, имеющие ровно семь делителей.
*/

#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int *w = new int[x];
	for (int i = 0; i < x; i++)
	{
		int k = 0;
		cin >> *(w + i);

		int q = *(w + i);
		for (int j = 1; j <= *(w + i);  j++)
		{
			if ((q % j) == 0)
			{
				k++;
			};
		};
		if (k == 7)
		{
			cout << *(w + i) << " ";
		};
	};
}
