#ifndef MYVECTITERATOR
#define MYVECTITERATOR

#include "myvector.hpp"

template <typename A, int n> struct MyVector_iterator {
    MyVector<A, n> *base;
    int index = 0;

    friend MyVector<A, n>;
    MyVector_iterator(MyVector<A, n> *base) : base(base) {}

    bool operator==(const MyVector_iterator &other)
    {
        return this->index == other.index;
    }
    A operator*() { return (*base).data[index]; }
    MyVector_iterator &operator++()
    {
        this->index += 1;
        return *this;
    }
    MyVector_iterator &operator--()
    {
        this->index -= 1;
        return *this;
    }
    MyVector_iterator &begin()
    {
        this->index = 0;
        return *this;
    }
    MyVector_iterator &end()
    {
        this->index = (*(this->base)).size;
        return *this;
    }

    ~MyVector_iterator() {}
};

#endif
