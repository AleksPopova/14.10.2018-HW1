/*
Реализуйте структуру Array для работы с массивами выделенными в динамической памяти.
В программе должно присутствовать описание структуры и программа показывающая работоспособность структуры.
*/
#include <iostream>
using namespace std;
struct Array
{
    int arraySize;
    int* data;
    Array (int a)
    {
        arraySize = a;
        data = new int [a];
    };
    Array (const Array& A)
    {
        arraySize = A.arraySize;
        data = A.data;
    };
    ~Array ()
    {
        delete[] data;
    };
    void input ()
    {
        for (int i = 0; i < arraySize; i++)
            cin >> *(data + i );
    };
    void output()
    {
        for (int i = 0; i < arraySize; i++)
            cout << *(data + i) <<" ";
        cout << "\n";
    };
    int &operator[](int i)
    {
        return data[i];
    };
    int Max ()
    {
        int s = *data;
        for (int i = 0; i < arraySize; i++)
            if (*(data + i) > s)
                s = *(data + i);
        return s;
    };
    int Min ()
    {
        int s = *data;
        for (int i = 0; i < arraySize; i++)
            if (*(data + i) < s)
                s = *(data + i);
        return s;
    };
    int Avg ()
    {
        int s = 0;
        for (int i = 0; i < arraySize; i++)
            s += *(data + i);
        return (s/arraySize);
    };
};
void test (Array A)
{
    cout << "Copying constructor is working\n";
}
int main()
{
    int N;
    cout << "Input array size\n";
    cin >> N;
    Array X(N);
    cout << "Input array components\n";
    X.input();
    cout << "Output: ";
    X.output();
    cout << "The greatest value: "<< X.Max() << "\n";
    cout << "The least value: " << X.Min() << "\n";
    cout << "Average: "<< X.Avg() << "\n";
    cout << X[0] << " " << X[1] << " " << X[2] << "\n";
    test (X);
    return 0;
}
