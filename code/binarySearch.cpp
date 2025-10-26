#include <iostream>
using namespace std;

// Функция бинарного поиска
int binarySearch(int arr[], int target, int size) {
    int left = 0;
    int right = size - 1;
    
    while(left <= right){
        // Среднее значение индекса
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == target)
            return mid;      // Элемент найден!
            
        else if(target > arr[mid])
            left = mid + 1;  // Продолжаем искать в правой половине
            
        else
            right = mid - 1; // Продолжаем искать в левой половине
    }
    
    return -1;               // Элемент не найден
}

int main() {
    int sortedArray[] = {1, 3, 5, 7, 9};
    int n = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int searchElement = 5;
    
    int resultIndex = binarySearch(sortedArray, searchElement, n);
    
    if(resultIndex != -1)
        cout << "Элемент найден на позиции: " << resultIndex << endl;
    else
        cout << "Элемент не найден." << endl;
    
    return 0;
}
// Элемент найден на позиции: 2
