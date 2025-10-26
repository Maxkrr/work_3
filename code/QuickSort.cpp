#include <iostream>
#include <vector>
#include <algorithm>

// Функция разделения массива
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Выбираем последний элемент как опорный
    int i = low - 1; // Индекс меньшего элемента
    
    for (int j = low; j < high; ++j) {
        // Если текущий элемент меньше или равен опорному
        if (arr[j] <= pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Основная функция быстрой сортировки
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // pi - индекс разделения, arr[pi] на своем месте
        int pi = partition(arr, low, high);
        
        // Рекурсивно сортируем элементы до и после раздела
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Обертка для удобства использования
void quickSort(std::vector<int>& arr) {
    quickSort(arr, 0, arr.size() - 1);
}

// Пример использования
int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    quickSort(arr);
    
    std::cout << "Отсортированный массив: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
// Отсортированный массив: 11 12 22 25 34 64 90 
