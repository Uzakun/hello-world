#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[4];

    marks[0] = 56;
    marks[1] = 65;
    marks[2] = 23;
    marks[3] = 98;

    printf("Student with Roll No. 1 got %d marks\n", marks[0]);
    printf("Student with Roll No. 2 got %d marks\n", marks[1]);
    printf("Student with Roll No. 3 got %d marks\n", marks[2]);
    printf("Student with Roll No. 4 got %d marks\n", marks[3]);

    return 0;
}
