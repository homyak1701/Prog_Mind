#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Использование: %s <v> <a1> <a2> ... <an>\n", argv[0]);
        return 1;
    }

    int v = atoi (argv[1]);   

}