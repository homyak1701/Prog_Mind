#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Использование: %s <v> <a1> <a2> ... <an>\n", argv[0]);
        return 1;
    }

    int v = atoi(argv[1]);   
    int i = 0;

    /*
        Инвариант — это условие, которое остается истинным
        на протяжении всего выполнения программы.

        при i равным от 0 до (argc - 1)
        atoi(argv[i - 1]) != v
    */
    while (i < argc)
    {
        if (i == 0)
        {
            printf("Инициализация: atoi(argv[i - 1]) = %d; v = %d", atoi(argv[i - 1]), v);
        }
        else
        {
            printf("Сохранение: atoi(argv[i - 1]) = %d; v = %d", atoi(argv[i - 1]), v);
        }

        if (atoi(argv[i - 1]) == v)
        {
            break;
        }
        else if (i == argc)
        {
            printf("Завершение: atoi(argv[i - 1]) = %d; v = %d", atoi(argv[i - 1]), v);
            i = -1;
            break;
        }
            
        i++;
    }

    printf("Ответ i = %d", i);
}