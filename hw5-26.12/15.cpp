/*
Дано множество точек на плоскости. Напишите 
программу, находящую среди этих две, расстояние
между которыми - наименьшее
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int h(int a, int b, int c, int d) {
 int Le= 999999999;
 Le= abs(a - c) + abs(b - d);
 return Le;
}
int main()
{
  int N, M;
  cin » N » M;
  bool **X;
 
  X = new bool *[M];
  for (int i = 0; i < N; i++) {
   X[i] = new bool[N];
  }
  
  for (int i = 0;i < M; i++) {
   for (int j = 0; j < N; j++) {
    cin » X[j][i];
   }
  }
  int Z = 999999999;
  int ze= Z;
  for (int i = 0;i < M; i++) {
      for (int j = 0; j < N; j++) {
       if(X[j][i] != 0)
      for (int t = i;t < M; t++) {
       for (int q = j; q < N; q++) {
        if (X[q][t] != 0 && (q != j || t != i)) {
         ze= h(i, j, t, q);
         if (ze<= Z)
          Z = ze;

        }
             }
      }
  
      }
  }
  
  cout « Z;

 
  for (int i = 0;i < M; i++) {
   delete[] X[i];
  }
  delete[] X;
 return 0;
}
