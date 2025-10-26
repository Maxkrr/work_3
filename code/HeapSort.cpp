#include <iostream>
#include <vector>
// Функция для поддержания свойства кучи
void heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;        // Инициализируем наибольший элемент как корень
    int left = 2 * i + 1;   // Левый дочерний элемент
    int right = 2 * i + 2;  // Правый дочерний элемент

    // Если левый дочерний элемент больше корня
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Если правый дочерний элемент больше текущего наибольшего
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Если наибольший элемент не корень
    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        
        // Рекурсивно применяем heapify к затронутой подкуче
        heapify(arr, n, largest);
    }
}
// Основная функция пирамидальной сортировки
void heapSort(std::vector<int>& arr) {
    int n = arr.size();

    // Построение кучи (перегруппируем массив)
    for (int i = n / 2 - 1; i >= 0; --i)
        heapify(arr, n, i);

    // Последовательно извлекаем элементы из кучи
    for (int i = n - 1; i > 0; --i) {
        // Перемещаем текущий корень в конец
        std::swap(arr[0], arr[i]);
        
        // Вызываем heapify на уменьшенной куче
        heapify(arr, i, 0);
    }
}

// Пример использования
int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    heapSort(arr);
    
    std::cout << "Отсортированный массив: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
// Отсортированный массив: 11 12 22 25 34 64 90 
