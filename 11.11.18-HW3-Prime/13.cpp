/*
Напишите процедуру, проводящую сжатие символьного динамически выделенного массива. 
Несколько подряд идущих одинаковых букв должны заменяться на их количество и саму букву. 
Например, строка “aaabcccccdd” должна перейти в “3a1b5c2d”. Можно считать, 
что не бывает более девяти одинаковых букв, идущих подряд.
*/

#include <iostream>
using namespace std;
int variable (char* a, int b)
{
    int o = 1;
    for (int i = 0; i < (b-1); i++)
    {
        if ((*(a+i)) != (*(a+i+1)))
        {
            o++;
        };
    };
    return o;
}
int Length(char* a)
{
    int b = 0;
    while(*a++)
    {
        b++;
    };
    return b;
}
void zp (char* &a, int b)
{
    int r = variable(a, b);
    r += r;
    int z = 0;
    char* p = new char [r];
    int i = 0;
    while (i < b)
    {
        int v = 0;
        int j = i;
        while ((*(a+i)) == (*(a+j)))
        {
            v++;
            j++;
        };
        *(p + z + 1) = *(a+i);
        *(p + z) = v + '0';
        i = j;
        z += 2;
    };
    a = p;
}
int main()
{
   int n;
   char* s = new char [256];
   cin.getline(s, 256, '\n');
   n = Length(s);
   int f = variable(s,n);
   f += f;
   zp(s, n);
   for (int i = 0; i < f; i++)
   {
       cout << *(s + i);
   };
}
