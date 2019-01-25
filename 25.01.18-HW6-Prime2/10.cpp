/*
Дан целочисленный массив из N элементов.
Напишите программу, позволяющую найти и 
вывести произведение элементов массива, 
которые имеют нечётное значение и делятся на 3. 
Гарантируется, что в исходном массиве есть хотя 
бы один элемент, значение которого нечётно и кратно 3. 
Программа должна быть эффективна по времени и памяти.

*/

#include <iostream>
using namespace std;
int main() {
	int N, mult = 1;
	cin >> N;
	int *d = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> d[i];
	}
	for(int i = 0; i < N; i++) {
		if ((d[i] % 2 != 0) && (d[i] % 3 == 0)) {
			mult *= d[i];
		}
	}
	cout << mult;
	return 0;
}

/*
в данном случае самый эффективный варинт - обычный перебор всех элементов
*/