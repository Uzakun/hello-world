#include <stdio.h>

/* you have to make a code where 
you can write the table of any possible given number ;) */


int main(int argc, char const *argv[])
{
    int num;

    printf("Enter the number you want the multiplication table of:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num );

    /* here you can add that "printf" that's above just for
     a more better look for your multiplication table */

    for (int i = 1; i < 11 ; i++)
    {
      printf("%d X %d = %d\n", num, i, i*num);
    }
    

    return 0;
}
