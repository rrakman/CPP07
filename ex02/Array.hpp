#pragma once

template <typename T>
class Array {
    private:
        T* m_data;
        unsigned int m_size;
    public:
        Array();
        Array(unsigned int n);
        // Array(const Array& src);
        // const  Array & operator=(const Array &src);
        ~Array();
};

template <typename T>
Array<T>::Array()
{
    m_data = new T();
    m_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    m_data = new T[n]();
}


template <typename T>
Array<T>::~Array()
{
    delete [] m_data;
}