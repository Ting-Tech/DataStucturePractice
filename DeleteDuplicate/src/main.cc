#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int num, size = 0;
    int *arr;
    int *arrOut;

    scanf("%d", &size);

    arr = new int[size];
    arrOut = new int[size];
    // arrOut = (int *)malloc(size * sizeof(int));

    for (size_t i = 0; i < size; i++)
    {
        int num = 0;
        scanf("%d", &num);
        arr[i] = num;
    }

    int index = 0;
    for (size_t i = 0; i < size; i++)
    {
        bool same = false;
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i] == arrOut[j])
            {
                same = true;
                break;
            }
        }
        if (!same)
        {
            arrOut[index] = arr[i];
            index++;
        }
    }

    for (size_t i = 0; i < index; i++)
    {
        printf("%d", arrOut[i]);
    }

    return 0;
}