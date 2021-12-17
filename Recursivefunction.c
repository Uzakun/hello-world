#include <stdio.h>

int factorial(int number)

{
    if (number == 1 || number == 0)
    {
       return 1;
    }
    else
    {
        return (number * factorial(number - 1));

        /* wrote (number * factorial(number - 1) cuz, factorial goes like n.(n-1).(n-2)...1 , 
        we can also write same as n.(n-1)! , thats why used  (number * factorial(number - 1) */
    }
}

int main()

{
    int num;
    printf("enter the number you want the factorial of\n");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n" , num, factorial(num));

    return 0;
}
