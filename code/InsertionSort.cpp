#include <iostream>
using namespace std;

// Функция для сортировки вставками
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Текущий элемент
        int j = i - 1;
        
        // Перемещение элементов массива, которые больше ключа,
        // на одну позицию вперед, чтобы создать место для вставки
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        // Вставка ключа на его правильное место
        arr[j + 1] = key;
    }
}

// Функция для печати массива
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6}; // Исходный массив
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, n); // Сортировка массива
    
    cout << "Отсортированный массив: ";
    printArray(arr, n); // Печать отсортированного массива
    
    return 0;
}
// Отсортированный массив: 5 6 11 12 13
