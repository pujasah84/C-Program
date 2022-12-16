#include <stdio.h>

int main()
{
    int sum = 0; // variable to store the sum

    // loop through all the numbers from 1 to 100
    for (int i = 1; i <= 100; i++)
    {
        // if the number is divisible by 5 and not by 3, add it to the sum
        if (i % 5 == 0 && i % 3 != 0)
        {
        	printf("\n%d is exactly divisible by 5 and not by 3",i);
            sum += i;
            printf("\nThe value of sum after adding %d is %d",i,sum);
        }
    }

    printf("\nSum of numbers divisible by 5 but not by 3: %d\n", sum);
    return 0;
}

