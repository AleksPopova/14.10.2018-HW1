/*
Напишите процедуру, удаляющую из динамически 
выделенного массива максимальный и минимальный элементы 
(если таковых несколько – удалить нужно все).
По окончании работы процедуры количество выделенной памяти должно уменьшиться.
*/

#include <iostream>
using namespace std;

int Mx_x (int* x, int u)
{
    int k = *x;
    for (int i = 0; i < u; i++)
    {
        if ((*(x + i)) > k)
        {
            k = *(x+i);
        };
    };
    return k;
}

int mn_x (int* x, int u)
{
    int k = *x;
    for (int i = 0; i < u; i++)
    {
        if ((*(x + i)) < k)
        {
            k = *(x+i);
        };
    };
    return k;
}

int s (int* x, int u)
{
    int m = 0;
    for (int i = 0; i < u; i++)
    {
        if (((*(x + i)) == (Mx_x(x,b))) || ((*(x+i)) == (mn_x(x,b))))
        {
            m++;
        };
    };
    return m;
}

void o(int* &x, int u)
{
    int r = s(x, u);
    int* p= new int [u - r];
    int k = 0;

    for (int i = 0; i < u; i++)
    {
        if (((*(x + i)) != Mx_x(x,u)) && ((*(x + i)) != mn_x(x,u)))
        {
            *(p + k) = *(x + i);
            k++;
        };
    };

    x = p;
}

int main()
{
    int n;
    cin >> n;
    int* f = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(f + i);
    };

    int f = s(f, n);
    o(f, n);
    cout << '\n';

    for (int i = 0; i < (n - f); i++)
    {
        cout << *(f+i) << " ";
    };

    delete[]f;
}
