#include <iostream>

#ifndef MYVECTOR
#define MYVECTOR



template<typename A, int n> struct MyVector
{
  int capacity = n;
  A* data = new A[n];
  int size = 0;
  void add(A s);
  void remove();
  ~MyVector(){delete[] data;}
};
#include "myvector.hxx"
#endif
