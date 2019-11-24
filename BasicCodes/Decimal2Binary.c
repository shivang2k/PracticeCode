// C Program to find Binary Equivalent of an Decimal number

#include <stdio.h>
int main()
{
    long num, decimal_num, remainder, base = 1, binary = 0;

    printf("Enter a decimal integer in range of 0 to 100\n");
    scanf("%ld", &num);
    if(num > 100 || num < 0)                                        // Just to make sure the output is in the range of long int
    {
        printf("Not A Valid INPUT");
    }
    else
    {
        decimal_num = num;
        while (num > 0)
        {
            remainder = num % 2;
            binary = binary + remainder * base;
            num = num / 2;
            base = base * 10;
        }
        printf("Input number is = %ld\n", decimal_num);
        printf("Its binary equivalent is = %ld\n", binary);
    }

    return 0;
}
