#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[5];

    /* to make array of 4 you have to write marks[5],
     means if u wanna make array of n then u have to put marks as marks[n+1] */

    for (int i = 1; i < 5; i++)
    {
        printf("Student with Roll Number %d got given marks in the Test\n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 1; i < 5; i++)
    {
        printf("Student with Roll Number %d got %d marks in the Test\n", i, marks[i]);
    }

    return 0;
}
