#include <stdio.h>

/*Write this code if you wanna see code written in form like "at the place 1,1 the element is 34"
and so on */

int main(int argc, char const *argv[])
{
    int marks[2][4] = {{34, 65, 76, 56}, {32, 54, 65, 76}};

    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            //printf("%d ", marks[i][j]);

            printf("Student with Roll Number %d, %d got %d marks in the Test\n", i, j, marks[i][j]);
        }
        //printf("\n");
    }

    return 0;
}
