#pragma once
#include <iostream>

template <typename T>
class Array {
    private:
        T* a_data;
        unsigned int a_size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& src);
        const  Array & operator=(const Array &src);
        ~Array();
        T& operator[](unsigned int i);
        const T& operator[](unsigned int i) const;
        unsigned int size() const;
};

template <typename T>
Array<T>::Array()
{
    a_data = new T();
    a_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : a_size(n)
{
    a_data = new T[a_size]();
}

template <typename T>
Array<T>::Array(const Array &src) : a_size(src.a_size)
{
    a_data = new T[a_size]();
    for (unsigned int i = 0; i < a_size; i++)
    {
        a_data[i] = src.a_data[i];
    }    
}

template <typename T>
const Array<T> & Array<T>::operator=(const Array<T> &src)
{
    if (this == &src)
        return *this;
    delete [] a_data;
    a_size = src.a_size;
    a_data = new T[a_size]();
    for (unsigned int i = 0; i < a_size; i++)
    {
        a_data[i] = src.a_data[i];
    }
    return *this;    
}

template <typename T>
Array<T>::~Array()
{
    delete [] a_data;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= a_size)
        throw std::out_of_range("Index out of range");
    return a_data[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
    if (i >= a_size)
        throw std::out_of_range("Index out of range");
    return a_data[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return a_size;
}