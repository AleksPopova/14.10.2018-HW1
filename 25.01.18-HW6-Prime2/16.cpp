/*
В физической лаборатории проводится долговременный эксперимент 
по изучению гравитационного поля Земли. По каналу связи каждую 
минуту в лабораторию передаётся положительное целое число – текущее
показание прибора «Сигма 2015». Количество передаваемых чисел в серии 
известно и равняется N. Все числа не превышают 1000. Временем, в течение 
которого происходит передача, можно пренебречь.
Необходимо вычислить «бета-значение» серии показаний прибора 
– максимальное чётное произведение двух показаний, между моментами 
передачи которых прошло не менее 6 минут. Если получить такое произведение не удаётся,
ответ считается равным –1. Программа должна быть эффективной по времени и памяти.

*/

#include <iostream>
using namespace std;
int main() {
	int max = 1001;
	int S = 6;
	int indication, MinE, MinA, MinM, mult;
	int N;
	cin >> N;
	int *array = new int[S];
	for (int i = 0; i < S; i++) {
		cin >> array[i];
	}
	MinA = max;
	MinE = max;
	MinM = max * max;
	for (int i = S; i < N; i++) {
		cin >> indication;
		if (array[0] < MinA) {
			MinA = array[1];
		}
		if ((array[0] % 2 == 0) && (array[0] < MinE)) {
			MinE = array[0];
		}
		if (indication % 2 == 0) {
			mult = indication * MinA;
		}
		else if (MinE < max) {
			mult = indication * MinE;
		}
		else {
			mult = max * max;
		}
		if (mult < MinM) {
			MinM = mult;
			for (int j = 0; j < S - 1; j++) {
				array[j] = array[j + 1];
				array[S] = indication;
			}
		}
	}
	if (MinM == max * max) {
		MinM = -1;
	}
	cout << MinM;
	return 0;
}
