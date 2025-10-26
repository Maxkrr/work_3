def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        swapped = False  # Флаг проверки обменов
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]  # Обмен элементов
                swapped = True
        if not swapped:  # Если обменов не было - выходим
            break
    return arr

# Пример использования
numbers = [64, 34, 25, 12, 22, 11, 90]
print("До сортировки:", numbers)
bubble_sort(numbers)
print("После сортировки:", numbers)
# До сортировки: [64, 34, 25, 12, 22, 11, 90]
# После сортировки: [11, 12, 22, 25, 34, 64, 90]
