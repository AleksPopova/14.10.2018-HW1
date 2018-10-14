/*
Напишите программу находящую в массиве сумму элементов делящихся либо
на 72 либо на 27(не вместе)
*/
#include <iostream>
#include <numeric>

using namespace std;

int main() 
   {
    unsigned int Y = 0;
    cin >> Y;
    int sum = 0, X;
    for (unsigned int i = 0; i < Y; i++)
    {
        cin >> X;
        if ((abs(X) % 72 == 0) ^ (abs(X) % 27 == 0)) sum += X;
    };
    cout << sum;
    return 0;
   }
