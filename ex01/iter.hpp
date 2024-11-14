#pragma once
#include <iostream>

/**
 * @brief Iterates over an array of anytype and applies a function to each element
 * 
 * @param arr Array of type T
 * @param len Length of the array
 * @param f Function to apply to each element
 */
template <typename T, typename E>
void    iter(T *arr, size_t len, void (*f)(E &))
{
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}
