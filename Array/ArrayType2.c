#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[5] = {0, 54, 76, 87, 65};

    /* It wont include the first element as it goes for marks[0],
    But as here we have to start from 1 means marks[1] = 54 should be shown
    in code cuz we wanted code to execute from marks[1], 
    but as there is marks[0] already in code and it will disturbe the distribution
    that's why we gave the element of marks[0] as 0,
    as we have to fill the gap for marks[0], 
    and as not required that's why I wrote the element 0 for marks[0]
    (Delete comment from the code to execute) */

    //int marks[] = {0, 54, 76, 87, 65};

    /* Here even if we dont inclde how many marks we want as marks[4] or marks[5],
    it will be okay, number of elements are already written 
    (Delete comment from the code to execute) */

    for (int i = 1; i < 5; i++)
    {
        printf("Student with Roll Number %d got %d marks in the Test\n", i, marks[i]);
    }

    return 0;
}
