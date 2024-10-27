#include "Array.hpp"

int main()
{    
    Array<int> arr1(20);
    for (unsigned int i = 0; i < arr1.size(); ++i)
        arr1[i] = i + 13;

    std::cout << "Array elements: ";
    for (unsigned int i = 0; i < arr1.size(); ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;

    try {
        arr1[1] = 42;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}