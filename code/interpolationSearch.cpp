#include <iostream>
using namespace std;

// Функция интерполирующего поиска
int interpolationSearch(int arr[], int key, int size) {
    int low = 0;
    int high = size - 1;

    while ((arr[high] >= key && arr[low] <= key)) {
        // Предсказываем позицию искомого элемента
        int pos = low + (((double)(high - low) /
                         (arr[high] - arr[low])) *
                        (key - arr[low]));

        // Проверяем элементы
        if (arr[pos] == key)
            return pos;       // Нашли элемент

        if (arr[pos] < key)
            low = pos + 1;    // Перемещаемся вправо
        else
            high = pos - 1;   // Перемещаемся влево
    }

    if (arr[low] == key)
        return low;           // Возможно, найдем в конце

    return -1;                // Элемент не найден
}

int main() {
    int sortedArray[] = {1, 3, 5, 7, 9};
    int n = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int searchElement = 5;

    int resultIndex = interpolationSearch(sortedArray, searchElement, n);

    if (resultIndex != -1)
        cout << "Элемент найден на позиции: " << resultIndex << endl;
    else
        cout << "Элемент не найден." << endl;

    return 0;
}
// Элемент найден на позиции: 2
