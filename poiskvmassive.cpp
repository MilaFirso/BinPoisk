#include <iostream>
using namespace std;

// Функция, возвращающая количество элементов

int Sort(int arr[], int n, int k)
{
    int l = 0;
    int r = n - 1;

    // Сохраняет индекс самого левого элемента
    // из массива, который больше k
    int left = n;

    // Находит количество элементов, превышающее k
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Если средний элемент больше, чем
        // k меняет leftGreater и r
        if (arr[m] > k) {
            left = m;
            r = m - 1;
        }

        // Если средний элемент меньше, чем
        // или равно k обновляю l
        else
            l = m + 1;
    }

    // Возвращает количество элементов, превышающее k
    return (n - left);
}

int main()
{
    setlocale(LC_ALL, "rus");

    int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout << "Введите точку отсчёта: ";
    cin >> k;

    cout << "Количество элементов в массиве больших, чем " << k  << " : " << Sort(arr, n, k);

    return 0;
}