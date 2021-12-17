/* Write the factorial of any given number without using Recursive fuction */

#include <stdio.h>


int factorialiterative(int n)
{
    int val = 1;
    for (int i = n; i > 1; i--)
    {
        val *= i;
    }
    return val;
    
}

int main()
{
    int n;
    printf("Enter the number you want the factorial of\n");
    scanf("%d", &n);

    int factorial = factorialiterative(n);

    printf("The vlue of factorial is %d\n", factorial);


    return 0;
}
