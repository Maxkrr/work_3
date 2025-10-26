def sequential_search(arr, target):
    """
    Последовательный поиск элемента в массиве.
    Возвращает индекс элемента или -1, если элемент не найден.
    """
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

# Пример использования
numbers = [5, 2, 8, 1, 9, 3, 7, 4, 6]
target = 7

result = sequential_search(numbers, target)
if result != -1:
    print(f"Элемент {target} найден на позиции {result}")
else:
    print(f"Элемент {target} не найден в массиве")
# Вывод для базового примера:
# Элемент 7 найден на позиции 6
