#include <stdio.h>
int main()
{
    int num = 0;
    int fact = 1;

    if (num < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d = %d\n", num, fact);
    }


    return 0;
}
