#include <stdio.h>

int main()
{
    int size = 0;
    char *string;
    char *outputString;

    scanf("%d", &size);
    getchar();

    string = new char[size + 1];
    outputString = new char[(size * 2) + 1];

    fgets(string, size + 1, stdin);

    int index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (string[i] != ' ')
        {
            outputString[index] = string[i];
            index++;
        }
    }

    for (size_t i = 0; i < index; i++)
    {
        outputString[index + i] = outputString[index - i - 1];
    }

    for (size_t i = 0; i < index * 2 + 1; i++)
    {
        printf("%c", outputString[i]);
    }
}