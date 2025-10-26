#include <iostream>
using namespace std;

// Функция для сортировки массива методом выбора
void selectionSort(int arr[], int n) {
    // Проходим по массиву до предпоследнего элемента
    for (int i = 0; i < n - 1; i++) {
        // Индекс минимального элемента начинается с текущего места
        int minIdx = i;
        
        // Ищем минимальный элемент среди последующих
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j; // Запоминаем индекс нового минимального элемента
            }
        }
        
        // Меняем текущий элемент с найденным минимальным
        swap(arr[i], arr[minIdx]);
    }
}

// Вспомогательная функция для вывода массива
void printArray(int arr[], int n) {
    cout << "Массив: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Основная точка входа в программу
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Отсортированный массив: ";
    printArray(arr, n);

    return 0;
}
// Исходный массив: 64 25 12 22 11
// Отсортированный массив: 11 12 22 25 64
