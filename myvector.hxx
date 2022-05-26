#include "myvector.hpp"
#include <iostream>

template <class A, int n> void MyVector<A, n>::add(A s)
{
    // std::cout << "I am here1!\n";
    if (size == capacity) {
        A *tmp = new A[int(1.5 * capacity)];
        for (int i = 0; i < size; i++) {
            tmp[i] = data[i];
        }
        delete[] data;
        data = tmp;
        capacity = int(1.5 * capacity);
    }
    data[size] = s;
    // std::cerr << s << " _ " << data[size] << "\n";
    size++;
}
template <class A, int n> void MyVector<A, n>::remove()
{
    size--;
    // std::cout << "I am here2!\n";
    if (size <= capacity / 2) {
        A *tmp = new A[int(capacity / 2)];
        for (int i = 0; i < size; i++) {
            tmp[i] = data[i];
        }
        delete[] data;
        data = tmp;
        capacity = int(capacity / 2);
    }
    // std::cout << data[size-1] << "\n";
}
