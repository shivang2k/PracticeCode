//C program to find Maximum and minimum of given numbers and find their average

#include <stdio.h>
#define MAX 5

int main()
{
    int i,j,k, nums[MAX], total,max,min;
    int sum = 0;
    float avg = 0.0;
    printf("Enter Numbers.\n");

    for(i = 0; i<MAX; i++)
    {
        scanf("%d", &nums[i]);
    }

    max = nums[0];
    min = nums[0];


    for(i = 0; i<MAX; i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
        if(nums[i] <= min)
        {
            min = nums[i];
        }
    }

    printf("Max Number is: %d\n", max);
    printf("Min number is: %d\n", min);


    for(i = 0; i<MAX; i++)
    {
        sum = sum + nums[i];
    }
    avg = (float)sum/(float)(MAX);

    printf("Avg of numbers is: %.2f", avg);

    return 0;
}
