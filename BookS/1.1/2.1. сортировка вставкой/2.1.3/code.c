#include <stdio.h>
#include <stdlib.h>

/*
    Инвариант цикла for (в начале каждой итерации, перед проверкой условия i < n):

    arr - массив элементов;
    n - количество элементов в массиве;
    v - искомое значение;
    i - текущий индекс (0 ≤ i ≤ n);

    ∀k : 0 ≤ k < i ⇒ arr[k] ≠ v

    (Иными словами: среди всех уже проверенных элементов (с индексами от 0 до i-1)
    искомое значение v не найдено)
*/
int linear_search(int arr[], int n, int v)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            return i;
        }
    }

    return -1;
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Using: %s <v> <a1> <a2> ... <an>\n", argv[0]);
        return 1;
    }

    int v = atoi(argv[1]);
    int n = argc - 2;
    int *arr = malloc(n * sizeof(int));

    /*
        Собираем элемены в отдельный массив;
    */
    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 2]);
    }

    int result = linear_search(arr, n, v);

    if (result != -1)
    {
        printf("Found at index: %d\n", result);
    }
    else
    {
        printf("NIL\n");
    }

    free(arr);

    return 0;
}