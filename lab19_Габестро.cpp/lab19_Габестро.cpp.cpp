// lab19_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template <typename T>
T* replaceEvenWithOdd(const T* arr1, const T* arr2, size_t size1, size_t size2) {
    T* result = new T[size1];

    for (size_t i = 0; i < size1; ++i) {
        result[i] = arr1[i];
    }

    for (size_t i = 0; i < size1 && i < size2; ++i) {
        if (arr1[i] % 2 == 0 && arr2[i] % 2 != 0) {
            result[i] = arr2[i];
        }
    }

    return result;
}

int main() {
    setlocale(LC_CTYPE, "ukr");

    const int size1 = 5;
    const int size2 = 5;
    int array1[size1] = { 2, 4, 6, 8, 10 };
    int array2[size2] = { 1, 3, 5, 7, 9 };

    int* result = replaceEvenWithOdd(array1, array2, size1, size2);

    std::cout << "Новий масив: ";
    for (size_t i = 0; i < size1; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    delete[] result;

    return 0;
}
