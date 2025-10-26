#include <iostream>
#include <vector>

// Функция для объединения двух отсортированных частей массива
void merge(std::vector<int>& arr, int left, int middle, int right) {
    int const leftSize = middle - left + 1;
    int const rightSize = right - middle;

    // Создание временных массивов для левой и правой частей
    std::vector<int> leftArr(leftSize);
    std::vector<int> rightArr(rightSize);

    // Заполнение временных массивов
    for (int i = 0; i < leftSize; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < rightSize; j++) {
        rightArr[j] = arr[middle + 1 + j];
    }
    // Индексы для левой, правой и объединённого массивов
    int i = 0, j = 0, k = left;

    // Объединение двух отсортированных частей
    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i++];
        } else {
            arr[k] = rightArr[j++];
        }
        k++;
    }

    // Добавление оставшихся элементов из левой части
    while (i < leftSize) {
        arr[k++] = leftArr[i++];
    }

    // Добавление оставшихся элементов из правой части
    while (j < rightSize) {
        arr[k++] = rightArr[j++];
    }
}

// Основная функция сортировки слиянием
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        // Нахождение середины массива
        int middle = left + (right - left) / 2;

        // Рекурсивная сортировка левой и правой частей
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Объединение отсортированных частей
        merge(arr, left, middle, right);
    }
}

int main() {
    std::vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    // Вызов сортировки слиянием
    mergeSort(arr, 0, arr.size() - 1);

    // Вывод отсортированного массива
    std::cout << "Отсортированный массив: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
// Отсортированный массив: 3 9 10 27 38 43 82
