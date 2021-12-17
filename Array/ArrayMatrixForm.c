#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[2][4] = {{34, 65, 76, 56}, {32, 54, 65, 76}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}