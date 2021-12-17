#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    printf("type the last natural number you want the sum of\n");
    scanf("%d", &n); 

    for (int i = 1; i <= n; i++)
    {
        sum +=i;

        printf("sum of first %d natural number is: %d\n", n, sum);
    }
    
    return 0;
}
