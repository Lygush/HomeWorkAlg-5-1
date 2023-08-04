#include <iostream>

void print_mass(int* arr, int size) {
    std::cout << "Исходный массив: ";
    for (int i{}; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void print_pyramid(int* arr, int size) {
    std::cout << "0 root " << arr[0] << std::endl;
    int level{1}, counter{};
    for (int i{ 1 }; i < size; ++i) {
        if (counter == std::pow(2, level)) {
            level++;
            counter = 0;
        }
        counter++;
        std::cout << level << " ";
        if (i % 2 == 0) {
            std::cout << "right(";
        }
        else {
            std::cout << "left(";
        }
        std::cout << arr[(i - 1) / 2] << ") ";
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int arr_first[] { 1, 3, 6, 5, 9, 8 };
    print_mass(arr_first, 6);
    print_pyramid(arr_first, 6);
    std::cout << std::endl;
    int arr_second[]{ 94, 67, 18, 44, 55, 12, 6, 42 };
    print_mass(arr_second, 8);
    print_pyramid(arr_second, 8);
    std::cout << std::endl;
    int arr_third[]{ 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };
    print_mass(arr_third, 10);
    print_pyramid(arr_third, 10);
    std::cout << std::endl;
    return 0;
}

