
#include <iostream>

// Функция, которая меняет местами четные и нечетные элементы массива
void swap_even_odd(int* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        std::swap(*(arr + i), *(arr + i + 1));
    }
}

// Функция, которая возводит переменную в степень
void power(int* var, int exp) {
    int temp = *var;
    for (int i = 1; i < exp; i++) {
        *var *= temp;
    }
}


   
int main() {
    setlocale(LC_ALL, "ru");

    /*
    // Создаем массив из 10 элементов
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Создаем указатель на первый элемент массива
    int* ptr = arr;
    // Меняем местами четные и нечетные элементы
    for (int i = 0; i < 5; i++) {
        // Меняем местами элементы с четными и нечетными индексами
        std::swap(*ptr, *(ptr + 1));
        // Переходим к следующей паре элементов
        ptr += 2;
    }

    // Выводим измененный массив
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
   */



   // Создаем массив из 10 элементов
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Меняем местами четные и нечетные элементы
    swap_even_odd(arr, 10);

    // Выводим измененный массив
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Возводим переменную n в степень 3
    int n = 10;
    power(&n, 3);
    std::cout << n << std::endl;

  
    return 0;
}
