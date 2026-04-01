#include <stdio.h>
#include <stdlib.h>

/*
    Инвариантом будет условие, что при i = [0;n-1]
    если взять j так, что j = [0;i-1], то arr[j] != v
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