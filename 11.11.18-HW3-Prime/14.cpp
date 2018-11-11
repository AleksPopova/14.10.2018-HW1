
/*
Напишите процедуру, проводящую “разжатие” символьного динамически выделенного массива, сделанное в прошлой задаче. 
Например строка “3a1b5c2d “должна перейти в “aaabcccccdd”. 
Можно считать, что не бывает более девяти одинаковых букв, идущих подряд.
*/

#include <iostream>
using namespace std;
int memory (char* a, int b)
{
int p = 0, k;
for (int i = 0; i < b; i++)
{
if ((i % 2) == 0)
{
k = (*(a + i) - '0');
p += k;
};
};
return p;
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
void nzp (char* &a, int b)
{
int r = memory (a, b);
char*u = new char [r];
int q, z = 0;;
for (int i = 0; i < b; i += 2)
{
q = (*(a + i) - '0');
while (q != 0)
{
*(u + z) = *(a + i + 1);
q--, z++;
};
};
a = u;
}
int main()
{
int n;
char* sh = new char [256];
cin.getline(sh, 256, '\n');
n = L(sh);
int w = memory (sh, n);
nzp(sh, n);
for (int i = 0; i < w; i++)
{
cout << *(sh + i);
};
}
