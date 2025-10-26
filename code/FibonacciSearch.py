def fibonacci_sequence(n):
    """Возвращает список первых n чисел Фибоначчи"""
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    
    sequence = [0, 1]
    for i in range(2, n):
        sequence.append(sequence[i-1] + sequence[i-2])
    
    return sequence

# Пример использования
n = 15
fib_numbers = fibonacci_sequence(n)
print(f"Первые {n} чисел Фибоначчи:")
print(fib_numbers)

# Красивый вывод
print("\nПоследовательность Фибоначчи:")
for i, num in enumerate(fib_numbers):
    print(f"F({i}) = {num}")
# Вывод для n = 10:
# F(0) = 0
# F(1) = 1
# F(2) = 1
# F(3) = 2
# F(4) = 3
# F(5) = 4
# F(6) = 5
# F(7) = 8
# F(8) = 13
# F(9) = 21
