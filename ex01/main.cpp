#include"iter.hpp"

template <typename T>
void    rot1(T &a)
{
    a += 1;
}

template <typename T>
void print(T &a)
{
    std::cout<< a << std::endl;
}

int main()
{
    int     arr[] = {1, 2, 3, 4, 5};
    char    arr2[] = {'z', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    double  arr3[] = {1.1, 2.2, -3.3, 4.4, 5.5};

    size_t arr_size = sizeof(arr) / sizeof(arr[0]);
    size_t arr2_size = sizeof(arr2) / sizeof(arr2[0]);
    size_t arr3_size = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Int array: " << std::endl;
    iter(arr, arr_size, rot1);
    iter(arr, arr_size, print);

    std::cout << "Char array: " << std::endl;
    iter(arr2, arr2_size, rot1);
    iter(arr2, arr2_size, print);

    std::cout << "Double array: " << std::endl;
    iter(arr2, arr2_size, rot1);
    iter(arr3, arr3_size, print);

    return 0;
}
