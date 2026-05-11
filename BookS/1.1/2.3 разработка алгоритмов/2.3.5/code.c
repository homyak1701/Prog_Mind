#include <stdio.h>
#include <stdlib.h>

// arr - исходный массив;
// q - начало части массива, откуда мы начинаем поиск;
// p - конец части массива, где мы заканчиваем поиск;
// v - значение, которое мы ищем;
int bin_search(int arr[], int q, int p, int v)
{
    // 1. Если границы пересеклись — элемент не найден
    if (q > p)
    {
        return -1
    }

    int cen = q + (p - q) / 2

    if (arr[cen] == v)
    {
        return cen;
    }
    else if (arr[cen] > v)
    {
        // Ищем в левой половине, исключая cen
        return bin_search(arr, q, cen - 1, v);
    } 
    else
    {
        // Ищем в правой половине, исключая cen
        return bin_search(arr, cen + 1, p, v);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int v = 2;

    // В функцию передаем индекс последнего элемента: n - 1
    int result = bin_search(arr, 0, n - 1, v);

    if (result != -1) printf("Found at index: %d\n", result);
    else printf("NIL\n");

    return 0;
}