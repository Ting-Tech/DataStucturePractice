#include <stdio.h>

int main()
{
    int sizeI = 0;
    int sizeJ = 0;
    int count = 0;
    int **matrix;

    scanf("%d%d", &sizeI, &sizeJ);

    matrix = new int *[sizeI];

    for (size_t i = 0; i < sizeJ; i++)
    {
        matrix[i] = new int[i];
    }

    for (size_t i = 0; i < sizeJ; i++)
    {
        for (size_t j = 0; j < sizeI; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (size_t i = 0; i < sizeJ; i++)
    {
        for (size_t j = 0; j < sizeI; j++)
        {
            if (i > j)
            {
                count += matrix[i][j];
            }
        }
    }

    printf("%d", count);

    return 0;
}