Задача 2. Поиск в массиве

Вам нужно написать функцию, которая принимает на вход отсортированный массив целых чисел и целое число. Назовём его точкой отсчёта. Функция должна посчитать количество элементов в массиве, которые больше, чем переданное в функцию целое число — то есть больше, чем точка отсчёта. Требуемая алгоритмическая сложность: время O(log2n), дополнительная память O(1).

Затем нужно протестировать написанную функцию. Точку отсчёта спрашивайте в начале работы программы у пользователя, а отсортированный массив сделайте автоматическим, например [14, 16, 19, 32, 32, 32, 56, 69, 72].

Подумайте, как бы вы решили эту задачу, как достигли бы требуемой асимптотики.
Примеры работы программы с массивом [14, 16, 19, 32, 32, 32, 56, 69, 72]

Введите точку отсчёта: 32
Количество элементов в массиве больших, чем 32: 3

Введите точку отсчёта: 15
Количество элементов в массиве больших, чем 15: 8
