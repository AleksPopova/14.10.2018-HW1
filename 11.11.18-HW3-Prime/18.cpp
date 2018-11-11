/*
Напишите логическую функцию,
проверяющую, является строка палиндромом. 
Можно считать, что строка состоит только из букв латиницы.
*/

#include <iostream>
using namespace std;
bool pal (char* O, int b)
{
    b--;
    int k = 0;
    for (int i = 0; i <= ((b - 1)/2); i++)
    {
        if (O[i] != O[b - i])
        {
            k++;
        };
    };
    return (k == 0);;
}
int L(char* a)
{
    int b = 0;
    while(*a++)
    {
        b++;
    };
    return b;
}
int main()
{
    int n;
    char* m = new char [256];
    cin.getline(m, 256, '\n');
    n = L(m);
    cout << '\n';
    if (pal(m, n) == 1)
    {
        cout << "yeah";
    }
    else
    {
        cout << "nope”;
    };
}
